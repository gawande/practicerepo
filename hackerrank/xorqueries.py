def partition(arr,l,r):
	pivot=arr[r]
	i=l-1
	for j in range(l,r):
		if arr[j]<=pivot:
			i=i+1
			arr[i],arr[j]=arr[j],arr[i]
	arr[i+1],arr[r]=arr[r],arr[i+1]
	#print " ".join(map(str,arr))
	return i+1		

def quicksort(arr,l,r):
	if l<r:
		m=partition(arr,l,r)
		quicksort(arr,l,m-1)
		quicksort(arr,m+1,r)

arr=[]		
m=input()
for s in range(m):
	q=map(int,raw_input().strip().split(" "))
	if q[0]==0:
		arr.append(q[1])
	elif q[0]==1:
		l=q[1]-1
		r=q[2]-1
		x=q[3]
		maxxor=0
		for i in range(l,r+1):
			#print "count "+str(i)			
			if x^arr[i]>maxxor:
				maxxor=x^arr[i]
				maxxoridx=i
		print arr[maxxoridx]
		#print maxxor
		#print maxxoridx
	elif q[0]==2:
		del arr[-q[1]:]
	elif q[0]==3:
		l=q[1]-1
		r=q[2]-1
		x=q[3]
		count=0
		for i in arr[l:r+1]:
			if i<=x:
				count+=1
		print count
	elif q[0]==4:
		l=q[1]-1
		r=q[2]-1
		k=q[3]
		tmparr=list(arr[l:r+1])
		quicksort(tmparr,0,len(tmparr)-1)
		print tmparr[k-1] 
	#print arr		
			
			
			
			
