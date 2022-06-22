#include<stdio.h>
/*
int main(){
	int num, a= 0, b = 1, next, i;
	
	printf("enter the range: ");
	scanf("%d", &num);
	
	for(i=1;i<=num;i++){
		printf("%d ", a);
		next = a + b;
		a = b;
		b = next;
	}
	
	return 0;
}
*/
int fibonacci(int i){
	if(i == 0){
		return i;
	}
	
	if(i == 1){
		return i;
	}
	
	return fibonacci(i-1) + fibonacci(i-2);
}
int main(){
	int num, i;
	
	printf("enter the range: ");
	scanf("%d", &num);
	
	for(i=0;i<=num;i++){
		printf("%d ", fibonacci(i));
	}
	
	return 0;
}