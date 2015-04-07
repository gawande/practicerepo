(defun split (chars str &optional (lst nil) (accm ""))
  (cond
    ((= (length str) 0) (reverse (cons accm lst)))
    (t
     (let ((c (char str 0)))
       (if (member c chars)
    (split chars (subseq str 1) (cons accm lst) "")
    (split chars (subseq str 1) 
                        lst 
                        (concatenate 'string
           accm
         (string c))))
            ))))

(defun gcd ())






(setq q (parse-integer (read-line)))

