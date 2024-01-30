#include<stdio.h>

int sumOfDigits(int n) {
    int sum;
    if(n < 10) {
        return n;
    } else {
        // sum = 0;
        // while(n != 0) {
        //     sum += n % 10;
        //     n /= 10;
        // }
        return n % 10 + sumOfDigits(n / 10);
    }
}


void main() {
    int num, sum;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("\nPlease enter a positive integer: ");
    } else {
        printf("\nSum of digits of %d is: %d", num, sumOfDigits(num));
    }
}