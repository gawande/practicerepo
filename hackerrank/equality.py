t=int(raw_input().strip())

for x in range(t):
	n=int(raw_input().strip())
	a=map(int,raw_input().strip().split(" "))
	a=sorted(a)
	currentchunk=1
	maxchunk=0
	for i in range(n-1):
		if a[i]!=a[i+1]:
			currentchunk=1
		else:
			currentchunk+=1
		if maxchunk<currentchunk:
			maxchunk=currentchunk
		
	print n-maxchunk	
