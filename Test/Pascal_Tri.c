#include<stdio.h>

int main() {
    int rows = 5, coef = 1, space, i, j;

    // printf("\nEnter the number of rows: ");
    // scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++)
            printf("      ");
        
        for (j = 0; j <= i; j++) {
            if(j == 0) coef = 1;
            else coef = coef * (i-j+1)/j;
            printf("(%d, %d, %d), ", i, j, coef);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        
        for (j = 0; j <= i; j++) {
            if(j == 0 || i == 0) coef = 1;
            else coef = coef * (i-j+1)/j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}