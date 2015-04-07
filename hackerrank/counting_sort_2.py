n=input()
arr=map(int,raw_input().split(" "))

c=[0]*100
for i in arr:
    c[i]=c[i]+1

out=""

for i in range(len(c)):
	while c[i]!=0:
		out=out+" "+str(i)
		c[i]=c[i]-1

print out[1:] 
