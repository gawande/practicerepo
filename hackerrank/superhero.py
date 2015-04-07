minbgb=float("inf")
def getMinBullets(maxlvl,lvl,bgb,plb):
	global minbgb
	global p
	global b
	global m
	global n
	#print maxlvl,lvl,bgb,plb
	if lvl==maxlvl:
		minpow=min(p[lvl])
		if minpow>plb:
			if bgb+(minpow-plb)<minbgb:
				minbgb=bgb+(minpow-plb)
		else:
			if bgb<minbgb:
				minbgb=bgb
	else:
		for j in range(m):
			if p[lvl][j]>plb:
				if bgb+(p[lvl][j]-plb)<minbgb:
					getMinBullets(maxlvl,lvl+1,bgb+(p[lvl][j]-plb),b[lvl][j])
				else:
					continue
			else:
				getMinBullets(maxlvl,lvl+1,bgb,b[lvl][j])

				
t=input()
p=None
b=None
n=None
m=None
for x in range(t):
	p=[]
	b=[]
	n,m=map(int,raw_input().strip().split(" "))
	for y in range(m):
		tmp=map(int,raw_input().strip().split(" "))
		p.append(tmp)
	for y in range(m):
		tmp=map(int,raw_input().strip().split(" "))
		b.append(tmp)
	#print m
	#print n
	#print p
	#print b
	minbgb=float("inf")
	getMinBullets(n-1,0,0,0)
	print minbgb	
					
