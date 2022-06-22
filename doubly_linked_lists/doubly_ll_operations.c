#include<stdio.h>
#include<stdlib.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
}*head = NULL;

void insert_at_beginning(int data);
void insert_at_end(int data);
void insert_at_nth_position(int data, int position);
void print();
void delete_nth_element(int position);
void reverse();

int main(){
	int i, position;
	
	for(i=1;i<10;i++){
		insert_at_end(i);
	}
	
	printf("\nOriginal Linked List is:");
	print();
	
	insert_at_beginning(0);
	printf("\nAfter inserting at beginning: ");
	print();
	
	printf("\nEnter the position to insert: ");
	scanf("%d", &position);
	
	insert_at_nth_position(10, position);
	printf("\nAfter inserting at %d LL is:", position);
	print();
	
	delete_nth_element(position);
	printf("\nAfter deleting at %d LL is:", position);
	print();
	
	printf("\nAfter reversing LL: ");
	reverse();
	print();
		
	return 0;
}

void insert_at_end(int data){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->next = NULL;
	new->data = data;
	new->prev = NULL;
	
	if(head == NULL){
		head = new;
		return;
	}
	
	struct node *tmp = head;
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	
	tmp->next = new;
	new->prev = tmp;
	
	return;
}

void print(){
	if(head == NULL){
		return;
	}
	struct node *tmp = head;
	while(tmp != NULL){
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	return;
}

void insert_at_beginning(int data){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->next = NULL;
	new->data = data;
	new->prev = NULL;
	
	if(head == NULL){
		head = new;
		return;
	}
	
	new->next = head;
	head->prev = new;
	new->prev = NULL;
	head = new;
	
	return;
}

void insert_at_nth_position(int data, int position){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->next = NULL;
	new->data = data;
	new->prev = NULL;
	
	int i;
	struct node *tmp = head;
	for(i=0;i<position;i++){
		tmp = tmp->next;
	}
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	
	return;
}

void delete_nth_element(int position){
	int i;
	struct node *tmp = head;
	
	for(i=0;i<position;i++){
		tmp = tmp->next;
	}
	
	struct node *tmp1 = tmp->next;
	tmp->next = tmp1->next;
	tmp1->next->prev = tmp;
	
	free(tmp1);
	
	return;
}

void reverse(){
	struct node *tmp = head, *tmp1;
	
	while(tmp != NULL){
		//swap tmp next and prev links
		tmp1 = tmp->next;
		tmp->next = tmp->prev;
		tmp->prev = tmp1;
		
		//to traverse through the LL
		tmp = tmp->prev;
		
		//make last node as head
		if(tmp != NULL && tmp->next == NULL){
			head = tmp;
		}
	}
}