#include<stdio.h>
#include<stdlib.h>

int main() {

    // int a;
    // int *p = &a;
    
    // printf("\n%u, %u", p, p+1);



    // int arr[] = {5, 4, 3, 2, 1}, size = sizeof(arr)/sizeof(arr[0]);
    // int *p = arr;   //it will get the first element from the array
    
    // int *p = (int *)malloc(5*sizeof(int));
    // int *p = (int *)calloc(5, sizeof(int));

    
    // for (int i = 0; i < 5; i++) {
    //     printf("\nEnter p[%d]: ", i);
    //     scanf("%d", p+i);
    // }

    // for (int i = 0; i < 5; i++) {
    //     printf("\n%u, %d ", (p+i), *(p+i));
    // }

    // p = realloc(p, 100);
    // printf("\n\n\n\n");

    // for (int i = 0; i < 5; i++) {
    //     printf("\n%u, %d ", (p+i), *(p+i));
    // }

    int size, row, col;
    printf("\nEnter row size: ");
    scanf("%d", &row);

    printf("\nEnter col size: ");
    scanf("%d", &col);

    int **p = (int **)calloc(row, sizeof(int));
    for (int i = 0; i < row; i++) {
        p[i] = (int *)calloc(col, sizeof(int));
    }
    

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("\nEnter p[%d][%d]: ", i, j);
            scanf("%d", &p[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("\np[%d][%d] = %d", i, j, p[i][j]);
        }
        printf("\n");
    }

    return 0;
}