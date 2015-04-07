#include <stdio.h>
#include <stdlib.h>

struct object{
	float key;
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
		scanf("%f %d",&((*arr)[i].key),&((*arr)[i].payload));
	}
	return n; 
}

void printArray(object arr[],int n){
	int i;
	printf("Array Size: %d\n",n);
	for(i=0;i<n;i++){
		printf("Key: %f, Payload: %d\n",arr[i].key,arr[i].payload);
	}
}

void swap(object* a, object* b){
	object temp=*a;
	*a=*b;
	*b=temp;
}
