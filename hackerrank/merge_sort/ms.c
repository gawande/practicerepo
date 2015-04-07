#include "../utils.h"

void mergeSort(object*,int,int);
void merge(object*,int,int,int);

int main(){
	object* arr;
	int arraySize=fillArray(&arr);
	printArray(arr,arraySize);
	mergeSort(arr,0,arraySize-1);
	printArray(arr,arraySize);
	return 0;	
}

void mergeSort(object arr[],int l,int r){
	printf("ms %d %d\n",l,r);
	if(l<r){
		int m=l+(r-l)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);	
	}	
}

void merge(object arr[],int l,int m,int r){
	int size1=m-l+1;
	int size2=r-m;
	object temp1[size1];
	object temp2[size2];
	int i,j;
	int k=l;
	for(i=0;i<size1;i++){
		temp1[i]=arr[k];
		k++;
	}
	for(j=0;j<size2;j++){
		temp2[j]=arr[k];
		k++;
	}
	i=0;
	j=0;
	k=l; 
	while(i<size1 && j<size2){
		if(temp1[i].key<temp2[j].key){
			arr[k]=temp1[i];
			i++;
		}
		else{
			arr[k]=temp2[j];
			j++;
		}
		k++;
	}
	while(i<size1){
		arr[k]=temp1[i];
		i++;
		k++;
	}
	while(j<size2){
		arr[k]=temp2[j];
		j++;
		k++;
	}
}
