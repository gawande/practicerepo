def partition(arr,l,r):
	pivot=arr[r]
	i=l-1
	for j in range(l,r):
		if arr[j]<=pivot:
			i=i+1
			arr[i],arr[j]=arr[j],arr[i]
	arr[i+1],arr[r]=arr[r],arr[i+1]
	print " ".join(map(str,arr))
	return i+1		

def quicksort(arr,l,r):
	if l<r:
		m=partition(arr,l,r)
		quicksort(arr,l,m-1)
		quicksort(arr,m+1,r)

n=input()
arr=map(int,raw_input().split(" "))
quicksort(arr,0,n-1)
