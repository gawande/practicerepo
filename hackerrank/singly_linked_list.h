#include "utils2.h"

struct node{
	object data;
	struct node* next;
};

typedef struct node node;

node* newNode(object obj){
	node* n=(node*)malloc(sizeof(node));
	n->data=obj;
	return n;	
}

void insertInOrder(node** head,object obj){
	//Assumption: The list is sorted
	node* n=newNode(obj);
	if(*head==NULL){
		n->next=NULL;
		*head=n;
		return;
	}
	if(((*head)->data).key>(n->data).key){
		n->next=*head;
		*head=n;
		return;
	}
	node* current=*head;
	while(current->next!=NULL && ((current->next)->data).key<(n->data).key){
		current=current->next;
	}
	n->next=current->next;
	current->next=n;	
}

void removeFromHead(node** head){
	if(*head!=NULL && (*head)->next!=NULL){
		node* n=(*head)->next;
		((*head)->data).key=(n->data).key;
		((*head)->data).payload=(n->data).payload;
		(*head)->next=n->next;
		free(n);
	}
	else{
		free(*head);
		*head=NULL;
	}	
}

void printList(node* head){
	node* current=head;
	while(current!=NULL){
		printf("%f ",(current->data).key);
		current=current->next;	
	}
	printf("\n");	
}
