#include<stdio.h>

void main() {
    int a=2, b=3;

    printf("\nEnter a and b: ");
    scanf("%d %d", &a, &b);

    // printf("\n\nArithmetic Operators: ");
    // printf("\n%d + %d = %d", a, b, a+b);
    // printf("\n%d - %d = %d", a, b, a-b);
    // printf("\n%d * %d = %d", a, b, a*b);
    // printf("\n%d / %d = %d", a, b, a/b);    //quotient
    // printf("\n%d (mod) %d = %d", a, b, a%b);    //remainder

    // printf("\n\nAssignment Operators: ");   //a += b; <---> a = a+b
    // printf("\n%d + %d = %d", a, b, a += b);
    // printf("\n%d - %d = %d", a, b, a -= b);
    // printf("\n%d * %d = %d", a, b, a *= b);
    // printf("\n%d / %d = %d", a, b, a /= b);    //quotient
    // printf("\n%d (mod) %d = %d", a, b, a %= b);    //remainder

    printf("\n\nRelational/Comparision Operators: ");   //return boolean values (true-1 -- false-0)
    printf("\n%d < %d = %d", a, b, a < b);
    printf("\n%d > %d = %d", a, b, a > b);
    printf("\n%d <= %d = %d", a, b, a <= b);
    printf("\n%d >= %d = %d", a, b, a >= b);
    printf("\n%d == %d = %d", a, b, a == b);
    printf("\n%d != %d = %d", a, b, a != b);

}

/*
Operators are used to perform certain operations.

There are 7 types of Operators:
1. Arithmetic Operators             - Binary    --  +, -, *, /, %
2. Assignment Operators             - Binary    --  =, +=, -=, *=, /=, %=
3. Relational Operators             - Binary    --  >, <, >=, <=, ==, !=
4. Logical Operators                - Binary    --  &&(AND), ||(OR), !(NOT) - Unary
5. Increment/Decrement Operators    - Unary     --  (post/pre)++, (post/pre)--
6. Bitwise Operators                - Binary    --  &(and), |(or), ^(xor), <<(left shift), >>(right shift)
7. Ternary Operators                - Ternary   --  ?:



divided in 3 categories:
1. Unary    - works using only one operand
2. Binary   - works using two operand
3. Ternary  - works using three operand

*/