def move(c):
	if (c[0],c[1])!=c[3]:
		if c[2]=="left":
			c[1]=c[1]+1
		elif c[2]=="down":
			c[0]=c[0]+1
		elif c[2]=="right":
			c[1]=c[1]-1
		elif c[2]=="up":
			c[0]=c[0]-1
	else:
		if c[2]=="left":
			c[2]="down"
			i=n-1
			j=c[1]
			while (i,j) in visited:
				i=i-1
			c[3]=(i,j)
			c[0]=c[0]+1
		elif c[2]=="down":
			c[2]="right"
			i=c[0]
			j=0
			while (i,j) in visited:
				j=j+1
			c[3]=(i,j)
			c[1]=c[1]-1
		elif c[2]=="right":
			c[2]="up"
			i=0
			j=c[1]
			while (i,j) in visited:
				i=i+1
			c[3]=(i,j)
			c[0]=c[0]-1
		elif c[2]=="up":
			c[2]="left"
			i=c[0]
			j=n-1
			while (i,j) in visited:
				j=j-1
			c[3]=(i,j)
			c[1]=c[1]+1
	
n=input()
mat=[[None]*n]*n
for s in range(n):
	tmp=raw_input().split(" ")
	if tmp[len(tmp)-1]=="":
		del tmp[len(tmp)-1]
	tmp=map(int,tmp)
	mat[s]=tmp

current=[0,0,"left",(0,n-1)]
visited={}
if n%2==0:
	end=(n/2,(n-1)/2)
else: 
	end=(n/2,n/2)

ans=[]
while True:
	#print current
	ans.append(mat[current[0]][current[1]])
	visited[(current[0],current[1])]=None
	if (current[0],current[1])==end:
		break
	else:
		move(current)

print " ".join(map(str,ans))
