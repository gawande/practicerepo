#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct object{
	long long key;
	int payload;
};

typedef struct object object;

int fillArray(object**);
void swap(object*,object*);
void printArray(object*,int);

int fillArray(object** arr){
	int n,i;
	scanf("%d",&n);
	*arr=(object*)malloc(sizeof(object)*n);
	for(i=0;i<n;i++){
		scanf("%lld",&((*arr)[i].key));
		(*arr)[i].payload=i+1;
	}
	return n; 
}

void printArray(object arr[],int n){
	int i;
	printf("Array Size: %d\n",n);
	for(i=0;i<n;i++){
		printf("Key: %lld, Payload: %d\n",arr[i].key,arr[i].payload);
	}
}

void swap(object* a, object* b){
	object temp=*a;
	*a=*b;
	*b=temp;
}

void quickSort(object*,int,int);
int partition(object*,int,int);

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

int main(){
	object* arr;
	int n=fillArray(&arr);
	quickSort(arr,0,n-1);
	int selected[n+2];
	memset(selected,0,sizeof(int)*(n+2));
	int i;
	long long sum=0;
	for(i=n-1;i>=0;i--){
		if(selected[arr[i].payload-1]==0 && selected[arr[i].payload+1]==0){
			selected[arr[i].payload]=1;
			sum=sum+arr[i].key;	
		}	
	}
	printf("%lld\n",sum);
	
	return 0;	
}
