#include<stdio.h>

/* Function to count number of digits in a given number */
int count_digits(int num){
    int count = 0;
    while(num != 0){
        num /= 10;
        count++;
    }
    return count;
}

/* Function to ccount the number of digits in a given number recursively */
int count_digits_recursive(int num){
    if(num == 0){
        return 0;
    }
    return 1 + count_digits_recursive(num/10);
}
int main(){
    int num, number_digits = 0, tmp;

    printf("Enter the number: ");
    scanf("%d", &num);

    //number_digits = count_digits(num);
    number_digits = count_digits_recursive(num);
    printf("\nNumber of digits in a given number %d are %d\n", num, number_digits);

    return 0;
}