#include<stdio.h>

int main() {
    int a = 34;
    int *p, **p1;

    // printf("\nEnter a: ");
    // scanf("%d", &a);

    p = &a;
    p1 = &p;

    printf("\n**p1 = %u", **p1);
    printf("\n*p1 = %u", *p1);
    printf("\np = %u", p);
    printf("\n&a = %u", &a);

    return 0;
}