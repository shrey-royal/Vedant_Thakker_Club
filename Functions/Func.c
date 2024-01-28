#include<stdio.h>

//function declaration
void add();
void sub(int, int);
int mul();
int div(int a, int b) {
    return a/b;
}


void main() {
    int a, b;

    add();  //function call

    printf("\nEnter a, b: ");
    scanf("%d %d", &a, &b);

    // sub(34, 21);
    sub(a, b);

    printf("\n mul = %d", mul());

    printf("\n div = %d", div(a, b));

}

//Function defination
void add() {
    int a, b;

    printf("\nEnter 2 integers: ");
    scanf("%d %d", &a, &b);

    printf("\n%d + %d = %d", a, b, a+b);
}

void sub(int x, int y) {
    printf("\n%d - %d = %d", x, y, x-y);
}

int mul() {
    int a, b;

    printf("\nEnter 2 integers: ");
    scanf("%d %d", &a, &b);

    return a*b;
}