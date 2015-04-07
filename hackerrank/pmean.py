def pmean(arr,start):
	pmean=0
	l=len(arr)
	for i in range(l):
		pmean=pmean+(i+1)*arr[(start+i)%l]
	return pmean
	
n=input()
arr=map(int,raw_input().split(" "))
maxpmean=None
for start in range(len(arr)):
	pm=pmean(arr,start)
	if maxpmean==None:
		maxpmean=pm
	else:
		if pm>maxpmean:
			maxpmean=pm
print maxpmean	
		

