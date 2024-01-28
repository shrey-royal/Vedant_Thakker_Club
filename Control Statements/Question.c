#include<stdio.h>

void main() {
    int a, b, c, sLarge;
    
    printf("\nEnter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if((a>=b && a<=c) || (a<=b && a>=c))
        sLarge = a;
    else if((b>=a && b<=c) || (b<=a && b>=c))
        sLarge = b;
    else
        sLarge = c;

    printf("\nThe second largest number is: %d", sLarge);
    
}

/*
> Write a C program that accepts three integers from the user and finds the second largest number among them.

Constraints:
1≤ x ≤100
1≤ y ≤100
1≤ z ≤100

Sample Date:
(1 , 2, 3) -> 2
(10, 12, 24) -> 12
(34, 21, 30) -> 30
*/