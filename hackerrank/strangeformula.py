n,m=map(int,raw_input().strip().split(" "))
p=map(int,raw_input().strip().split(" "))

'''
def term1(pi,m):
	pfm=1
	s=0
	for i in range(1,min(m,pi+1)):
		s=s+(pfm*i*i)%m
		pfm=(pfm*i)%m
	return s%m

def term2(pi,m):
	#print (pi*pi*(pi+1)/2)%m
	return (pi*pi*(pi+1)/2)%m
'''

ans=[]
fm=[]
ans.append(2%m)
fm.append(1%m)
mxp=max(p)
for i in range(2,mxp+1):
	imm=i%m
	fm.append((fm[i-2]*imm)%m)
	ans.append((ans[i-2]+(imm*fm[i-1])%m+imm)%m)
fsum=0
for x in p:
	fsum+=ans[x-1]
print ans	
print fsum%m
