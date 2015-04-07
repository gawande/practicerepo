p=raw_input().strip()
q=int(raw_input().strip())

x=[]
c=0
h=0
e=0
f=0
for char in p[1:]:
	if char=='c':
		c+=1
	elif char=='h':
		h+=1
	elif char=='e':
		e+=1
	elif char=='f':
		f+=1
x.append((c,h,e,f))
for char in p[1:]:
	top=x[-1]
	if char=='c':
		x.append((top[0]-1,top[1],top[2],top[3]))
	elif char=='h':
		x.append((top[0],top[1]-1,top[2],top[3]))
	elif char=='e':
		x.append((top[0],top[1],top[2]-1,top[3]))
	elif char=='f':
		x.append((top[0],top[1],top[2],top[3]-1))


for y in range(q):
	a,b,l,r=raw_input().strip().split(" ")
	if b=='c':
		idx=0
	elif b=='h':
		idx=1
	elif b=='e':
		idx=2
	elif b=='f':
		idx=3
	l=int(l)
	r=int(r)
	count=0
	for i in range(l-1,r):
		if p[i]==a:
			#print x[i]
			#print x[r-1]
			count=count+(x[i][idx]-x[r-1][idx])
	print count	



		
