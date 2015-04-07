#include "../utils.h"

int parent(int);
int left(int);
int right(int);
void heapify(object*,int,int);
void buildheap(object*,int);

int parent(int i){
	return (i-1)/2;	
}

int left(int i){
	return 2*i+1;	
}

int right(int i){
	return 2*i+2;
}

void heapify(object arr[],int i, int heapsize){
	int l=left(i);
	int r=right(i);
	int max;
	if(l<heapsize && arr[l].key>arr[i].key){
		max=l;
	}
	else{
		max=i;
	}
	if(r<heapsize && arr[r].key>arr[max].key){
		max=r;
	}
	if(max!=i){
		swap(&arr[i],&arr[max]);
		heapify(arr,max,heapsize);
	}	
}

void buildheap(object arr[],int heapsize){
	int n=(heapsize-2)/2;
	int i;
	for(i=n;i>=0;i--){
		heapify(arr,i,heapsize);	
	}
}
