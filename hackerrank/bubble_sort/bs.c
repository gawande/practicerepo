#include <stdio.h>
#include <stdlib.h>
#include "../utils.h"

void bubbleSort(object*,int);

int main(){
	object* arr;
	int arraySize=fillArray(&arr);
	bubbleSort(arr,arraySize);
	printArray(arr,arraySize);
	return 0;	
}

void bubbleSort(object arr[],int n){
	int i,j;
	int swapped;
	for(i=0;i<n-1;i++){
		swapped=0;
		for(j=0;j<n-i-1;j++){
			if(arr[j].key>arr[j+1].key){
				swapped=1;
				swap(&arr[j],&arr[j+1]);
			}	
		}
		if(!swapped){
			break;
		}
	}
}
