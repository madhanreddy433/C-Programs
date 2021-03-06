#include<stdio.h>

int sum_of_digits(int num){
    int sum = 0;

    while(num != 0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("\nSum of digits in %d is %d\n", num, sum_of_digits(num));
    return 0;
}