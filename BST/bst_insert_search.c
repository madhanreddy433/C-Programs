#include<stdio.h>
#include<stdlib.h>

struct node {
	struct node *left;
	int data;
	struct node *right;
}*root = NULL;

void insert(int key);
int search(int key);

int main(){
	int i, len, key, A[] = {10, 20, 25, 35, 50, 40, 30};
	len = sizeof(A)/sizeof(A[0]);
	
	for(i=0;i<len;i++){
		insert(A[i]);
	}
	
	printf("enter key to search: ");
	scanf("%d", &key);
	
	if(search(key) != -1){
		printf("\nFound the key");
	}else{
		printf("\nkey not found");
	}
	
	return 0;
}

void insert(int key){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->left = NULL;
	new->data = key;
	new->right = NULL;
	
	if(root == NULL){
		root = new;
		return;
	}
	
	struct node *tmp1 = NULL, *tmp2 = root; //tmp2 is for traverse and search, tmp1 is tailing pointer to make links
	while(tmp2 != NULL){
		if(tmp2->data == key){
			return;
		}else if(key < tmp2->data){
			tmp1 = tmp2;
			tmp2 = tmp2->left;
		}else{
			tmp1 = tmp2;
			tmp2 = tmp2->right;
		}
	}
	//inserting the key
	if(key < tmp1->data){
		tmp1->left = new;
	}else{
		tmp1->right = new;
	}
	
	return;
}

int search(int key){
	while(root != NULL){
		if(root->data == key){
			return root->data;
		}else if(key < root->data){
			root = root->left;
		}else{
			root = root->right;
		}
	}
	
	return -1;
}