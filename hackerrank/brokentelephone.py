t=int(raw_input().strip())
for q in range(t):
	n=int(raw_input().strip())
	a=map(int,raw_input().strip().split(" "))
	wrong={}
	for i in range(1,n):
		if a[i-1]!=a[i]:
			wrong[i-1]=None
			wrong[i]=None
	print len(wrong)
