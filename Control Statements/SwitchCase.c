#include<stdio.h>

void main() {
    int a, b;
    char choice;

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Remainder");
    printf("\nEnter your choice: ");
    scanf("%c", &choice);

    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);


    switch (choice) {
        case 'a':
        case 'A':
            printf("\n%d + %d = %d", a, b, a+b);
            break;

        case 'b':
        case 'B':
            printf("\n%d - %d = %d", a, b, a-b);
            break;

        case 'c':
        case 'C':
            printf("\n%d * %d = %d", a, b, a*b);
            break;

        case 'd':
        case 'D':
            printf("\n%d / %d = %d", a, b, a/b);
            break;
        
        case 'e':
        case 'E':
            printf("\n%d %c %d = %d", a, '%', b, a%b);
            break;

        default:
            printf("\nInvalid Choice!");
            break;
    }//end of switch

}//end of main