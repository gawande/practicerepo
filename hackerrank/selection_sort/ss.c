#include <stdio.h>
#include <stdlib.h>
#include "../utils.h"

void selectionSort(object*,int);

int main(){
	object* arr;
	int arraySize=fillArray(&arr);
	selectionSort(arr,arraySize);
	printArray(arr,arraySize);
	return 0;	
}

void selectionSort(object arr[],int n){
	int minIndex,i,j;
	for(i=0;i<n-1;i++){
		minIndex=i;
		for(j=i+1;j<n;j++){
			if(arr[j].key<arr[minIndex].key){
				minIndex=j;	
			}	
		}
		if(i!=minIndex){
			swap(&arr[i],&arr[minIndex]);	
		}
	}
}
