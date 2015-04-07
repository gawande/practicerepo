def toBinaryFlipped(d):
	i=31
	bits=[1]*32
	while d!=0:
		bits[i]=d%2
		if bits[i]==1:
			bits[i]=0
		else:
			bits[i]=1
		d=d/2
		i=i-1
	return "".join(map(str,bits))

n=input()
for i in range(n):
	print int(toBinaryFlipped(input()),2)
