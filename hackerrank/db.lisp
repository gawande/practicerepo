(defvar *db* nil)

(defun 
	make-record 
	(title artist rating ripped)
	(list :title title :artist artist :rating rating :ripped ripped)
)

(defun 
	add-record 
	(record)
	(push record *db*)
)

(defun 
	dump-db 
	() 
	(format t "~{~{~a:~10t~a~%~}~%~}" *db*)
)

(defun 
	prompt-read 
	(prompt) 
	(format *query-io* "~a: " prompt)
	(force-output *query-io*)
	(read-line *query-io*)
)

(defun 
	read-cd-info 
	()
	(make-record
		(prompt-read "title")
		(prompt-read "artist")
		(or 
			(parse-integer 
				(prompt-read "rating") 
				:junk-allowed t
			) 
			0
		)
		(y-or-n-p "ripped: ")
	)
)

(defun 
	add-cds 
	()
	(loop 
		(add-record (read-cd-info)) 
		(if 
			(not (y-or-n-p "Another: ")) 
			(return)
		)
	)
)

(defun
	save-db
	(filename)
	(with-open-file 
		(out filename :direction :output :if-exists :supersede)
		(with-standard-io-syntax
			(print *db* out)
		)
	)
)

(defun
	load-db
	(filename)
	(with-open-file
		(in filename)
		(with-standard-io-syntax
			(setf 
				*db*
				(read in)	
			)
		)	
	)
)

(defun
	select-by-title
	(title)
	(remove-if-not
		#'(lambda 
			(cd) 
			(equal 
				(getf 
					cd 
					:title
				)
				title
			)
		)
		*db*	
	)
)

(defun
	select-by-artist
	(artist)
	(remove-if-not
		#'(lambda 
			(cd) 
			(equal 
				(getf 
					cd 
					:artist
				)
				artist
			)
		)
		*db*	
	)
)

(defun
	select-by-rating
	(rating)
	(remove-if-not
		#'(lambda 
			(cd) 
			(= 
				(getf 
					cd 
					:rating
				)
				rating
			)
		)
		*db*	
	)
)

(defun
	select-by-ripped
	(ripped)
	(remove-if-not
		#'(lambda 
			(cd) 
			(equal 
				(getf 
					cd 
					:ripped
				)
				ripped
			)
		)
		*db*	
	)
)


