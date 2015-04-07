n=input()
arr=[]
mxarr=[]
for s in range(n):
	tmp=input()
	if tmp!=0 and tmp!=-1:
		arr.append(tmp);
		if len(mxarr)==0 or arr[-1]>mxarr[-1]:
			mxarr.append(tmp)
		else:
			mxarr.append(mxarr[-1])
	elif tmp==0:
		print mxarr[-1]
	elif tmp==-1:
		arr.pop()
		mxarr.pop()
		
