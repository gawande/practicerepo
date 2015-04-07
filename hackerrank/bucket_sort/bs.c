#include "../singly_linked_list.h"
#include <math.h>

void bucketSort(object*,int);

int main(){
	object* arr;
	int arraySize=fillArray(&arr);
	printArray(arr,arraySize);
	bucketSort(arr,arraySize);
	printArray(arr,arraySize);	
	
	//node* head=NULL;
	//insertInOrder(&head,arr[0]);
	//insertInOrder(&head,arr[1]);
	//insertInOrder(&head,arr[2]);
	//insertInOrder(&head,arr[3]);
	
	return 0;	
}

void bucketSort(object arr[],int n){
	node* buckets[n];
	int i;
	for(i=0;i<n;i++){
		buckets[i]=NULL;	
	}
	for(i=0;i<n;i++){
		insertInOrder(&buckets[(int)floor((double)n*(arr[i].key))],arr[i]);	
	}
	printf("BUCKETS\n");
	for(i=0;i<n;i++){
		printf("%d : ",i);
		printList(buckets[i]);	
	}
	
	int j=0;
	for(i=0;i<n;i++){
		while(buckets[i]!=NULL){
			arr[j++]=buckets[i]->data;
			removeFromHead(&buckets[i]);	
		}	
	}
	
}
