#include<stdio.h>

void main() {
    int i, j, k, r, noOfSpaces=1;

    // for(i=0; i<5; i++) {    //responsible for rows
    //     for(j=0; j<5; j++)    //responsible for cols
    //         printf("(%d, %d)\t", i, j);
    //     printf("\n");
    // }

    // printf("\n\n");
    // for(i=0; i<5; i++) {
    //     for(j=0; j<5; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // printf("\n\n");
    // for(i=0; i<5; i++) {
    //     for(j=0; j<5; j++) {
    //         if(i == 0 || j == 0 || i == 4 || j == 4) {
    //             printf("* ");
    //         } else {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    // printf("\n\n");
    // for(i=0; i<5; i++) {
    //     for(j=0; j<i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // printf("\n\n");
    // for(i=0; i<5; i++) {
    //     //space loop
    //     for(k=0; k<i; k++) {
    //         printf("-");
    //     }
    //     //cols
    //     for(j=5-i; j>0; j--) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // printf("\n\n");
    // for(i=0; i<5; i++) {
    //     //space loop
    //     for(j=5-i; j>0; j--) {
    //         printf("-");
    //     }
    //     //cols
    //     for(j=0; j<=i; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    //Triangle
    // for(i=0; i<=5; i++) {
    //     for(k=5; k>i; k--) {
    //         printf("  ");
    //     }
    //     for(j=0; j<(2*i-1); j++) {
    //         printf("* ");
    //     }
    //     printf("\n");        
    // }

    //Reverse Triangle

    printf("\nEnter rows: ");
    scanf("%d", &r);

    for(i=r; i>=1; i--) {
        for(j=1; j<noOfSpaces; j++) {
            printf("  ");
        }
        for(k=1; k<=(2*i-1); k++) {
            printf("* ");
        }
        noOfSpaces++;   //after every row the noOfSpaces will increase
        printf("\n");
    }
}

/*
Task: 

* * * * *
* *     *
*   *   *
*     * *
* * * * *

* * * * *
*     * *
*   *   *
* *     *
* * * * *


* * * * *
* *   * *
*   *   *
* *   * *
* * * * *

*/