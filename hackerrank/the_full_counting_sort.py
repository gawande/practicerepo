n=input()
arr=[]
for q in range(n):
	tmp=raw_input().split(" ")
	key=int(tmp[0])
	s=tmp[1]
	arr.append((key,s))

c=[0]*100
for t in arr:
    c[t[0]]=c[t[0]]+1
for i in range(1,len(c)):
	c[i]=c[i-1]+c[i]

srtd=[None]*len(arr)
for i in range(len(arr)-1,-1,-1):
	c[arr[i][0]]=c[arr[i][0]]-1
	if i>=len(arr)/2:
		srtd[c[arr[i][0]]]=arr[i]
	else:
		srtd[c[arr[i][0]]]=(arr[i][0],"-")
			
print " ".join([x[1] for x in srtd])	
