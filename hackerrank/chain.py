t=int(raw_input().strip())
for x in range(t):
	s=raw_input().strip()
	l=len(s)
	c1=0
	for i in range(l):
		if i%2==0:
			current='-'
		else:
			current='+'
		if s[i]!=current:
			c1+=1
	c2=0
	for i in range(l):
		if i%2==0:
			current='+'
		else:
			current='-'
		if s[i]!=current:
			c2+=1
	print min(c1,c2)
		
		
	
