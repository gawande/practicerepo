#include "../utils.h"

void quickSort(object*,int,int);
int partition(object*,int,int);

int main(){
	object* arr;
	int arraySize=fillArray(&arr);
	printArray(arr,arraySize);
	quickSort(arr,0,arraySize-1);
	printArray(arr,arraySize);
	return 0;	
}

void quickSort(object arr[],int l,int r){
	if(l<r){
		int m=partition(arr,l,r);
		quickSort(arr,l,m-1);
		quickSort(arr,m+1,r);	
	}
}

int partition(object arr[],int l,int r){
	object pivot=arr[r];
	int i,j;
	i=l-1;
	for(j=l;j<r;j++){
		if(arr[j].key<=pivot.key){
			i++;
			if(i!=j){
				swap(&arr[i],&arr[j]);		
			}
		}	
	}
	swap(&arr[i+1],&arr[r]);
	return i+1;	
}
