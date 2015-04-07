#include "../max_heap.h"

void heapSort(object*,int);

int main(){
	object* arr;
	int arraySize=fillArray(&arr);
	printArray(arr,arraySize);
	heapSort(arr,arraySize);
	printArray(arr,arraySize);
	return 0;	
}

void heapSort(object arr[],int heapsize){
	buildheap(arr,heapsize);
	int i;
	for(i=heapsize-1;i>0;i--){
		swap(&arr[0],&arr[i]);
		heapify(arr,0,--heapsize);
	}
}

