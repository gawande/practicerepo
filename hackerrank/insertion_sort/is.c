#include "../utils.h"

void insertionSort(object*, int);

int main(){
	object* arr;
	int arraySize=fillArray(&arr);
	printArray(arr,arraySize);
	insertionSort(arr,arraySize);
	printArray(arr,arraySize);
	return 0;	
}

void insertionSort(object arr[],int n){
	int i,j;
	object x;
	for(i=1;i<n;i++){
		x=arr[i];
		j=i-1;
		while(j>=0 && arr[j].key>x.key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		if(j+1!=i){
			arr[j+1]=x;
		}
	}	
}
