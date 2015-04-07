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
	
n=input()
arr=map(str,raw_input().split(" "))
left=0;
right=len(arr)-1
medianIndex=(len(arr)-1)/2
while 1:
	p=partition(arr,left,right)
	l=p-left+1
	if l==medianIndex:
		print arr[p]
		break
	elif l<medianIndex:
		medianIndex=medianIndex-l
		left=p+1
	else:
		right=p-1
		
