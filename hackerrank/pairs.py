def nc2(n):
	return fct[n]/fct[2]/fct[n-2]

t=input()

fct=[0]*100001
fct[0]=1
fct[1]=1
for i in range(2,100001):
	fct[i]=i
for i in range(2,100001):
	fct[i]=fct[i]*fct[i-1]

for s in range(t):
	n=input()
	arr=map(int,raw_input().split(" "))
	l=len(arr)
	c={}
	for i in arr:
		if i in c:
			c[i]=c[i]+1
		else:
			c[i]=1	
	ans=0
	for x in c:
		if c[x]>=2:
			ans=ans+2*nc2(c[x]																																																																																																																																															)	
	print ans
