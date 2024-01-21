#include<stdio.h>

void main() {
    int i, n, x, sum=0, x_power=1;

    printf("\nEnter x and n: ");
    scanf("%d %d", &x, &n);

    for (i=0; i<=n; i++) {
        sum += x_power;
        x_power *= x;
    }
    
    printf("\nSum is %d", sum);
}

/*
Armstrong Number
--------------------
    int i, num, rem, temp, noOfDigits, sum, p;

    // printf("\nEnter the num: ");
    // scanf("%d", &num);

    // //count the number of digits
    // temp = num;
    // noOfDigits=0;
    // while(temp > 0) {
    //     noOfDigits++;
    //     temp/=10;
    // }

    // //armstrong number logic
    // temp = num;
    // sum=0, p=1;

    // while(temp > 0) {
    //     rem = temp % 10;
    //     for(i=0, p=1; i<noOfDigits; i++) {
    //         p = p*rem;
    //     }
    //     sum += p;
    //     temp /= 10;
    // }

    // if(num == sum) {
    //     printf("%d is an armstrong number", num);
    // } else {
    //     printf("%d is not an armstrong number", num);
    // }

    //Armstrong range
    for(int num = 0; num <= 100000; num++) {
        //count the number of digits
        temp = num;
        noOfDigits=0;
        while(temp > 0) {
            noOfDigits++;
            temp/=10;
        }

        //armstrong number logic
        temp = num;
        sum=0, p=1;

        while(temp > 0) {
            rem = temp % 10;
            for(i=0, p=1; i<noOfDigits; i++) {
                p = p*rem;
            }
            sum += p;
            temp /= 10;
        }

        if(num == sum) printf("%d, ", num);
    }
--------------------------------------------------------------------------------
//Palindrome Number
int i, num, rem, temp, res;

    printf("\nEnter the num: ");
    scanf("%d", &num);

    temp = num;
    while(temp > 0) {
        rem = temp % 10;
        res = (res*10) + rem;
        temp /= 10;
    }

    if(num == res) {
        printf("%d is a Palindrome number.", num);
    } else {
        printf("%d is not a Palindrome number.", num);
    }
--------------------------------------------------------------------------------
//Fibonacci Series
int i, num, n1=0, n2=1, n3;

    printf("\nEnter the number of digits you want to print in the series: ");
    scanf("%d", &num);

    printf("%d, %d, ", n1, n2);      
    for (i = 0; i < num; i++) {
        n3 = n1 + n2;
        printf("%d, ", n3);
        //change the positions of the n1 and n2
        n1 = n2;
        n2 = n3;
    }
    printf("\n");
--------------------------------------------------------------------------------
//For LOOP - Series



*/