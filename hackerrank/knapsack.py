tmp=map(int,raw_input().strip().split(" "))
S=tmp[0]
N=tmp[1]
size=[]
val=[]
for i in range(N):
    tmp=map(int,raw_input().strip().split(" "))
    size.append(tmp[0])
    val.append(tmp[1])

K=[[None]*(S+1) for i in range(N+1)]
for i in range(N+1):
	for s in range(S+1):
		if i==0 or s==0:
			K[i][s]=0
		elif size[i-1]<=s:
			K[i][s]=max(K[i-1][s],val[i-1]+K[i-1][s-size[i-1]])
		else:
			K[i][s]=K[i-1][s]
		#print "i=="+str(i)+" "+"s=="+str(s)
		#print K
print K[N][S]
			
