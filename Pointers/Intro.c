#include<stdio.h>

void main() {
    int var = 34;
    int *ptr;// = &var;

    ptr = &var;

    printf("\nValue of var using var: %d", var);
    printf("\nAddress of var using &var: %p", &var);
    // printf("\nAddress of var using &var: %u", &var);
    // printf("\nAddress of var using &var: %o", &var);
    // printf("\nAddress of var using &var: %X", &var);
    // printf("\nAddress of var using &var: %x", &var);

    printf("\nvalue of var using *ptr: %d", *ptr);
    printf("\nAddress of var using ptr: %p", ptr);
    printf("\nAddress of ptr itself: %p", &ptr);

}

/*
Pointer: a variable that stores the address of another variable.
a variable will have a asterisk(*) sign that is called an indirection operator.
*/