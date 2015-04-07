n=input()
for s in range(n):
	print "Case "+str(s+1)+":"
	tmp=map(int,raw_input().strip().split(" "))
	n=tmp[0]
	k=tmp[1]
	words=[None]*k
	for i in range(n):
		words[i%k]=raw_input()
		freq={}
		for w in words:
			if w==None:
				continue
			if w not in freq:
				freq[w]=1
			else:
				freq[w]=freq[w]+1
		mxf=-1
		for w in freq:
			if freq[w]>mxf:
				mxf=freq[w]
				mxw=w
			elif freq[w]==mxf:
				if w<mxw:
					mxf=freq[w]
					mxw=w
		print mxw+" "+str(mxf)

