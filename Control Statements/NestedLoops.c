#include<stdio.h>

void main() {
    int i, j;

    for(i=0; i<5; i++) {    //responsible for rows
        for(j=0; j<5; j++)    //responsible for cols
            printf("(%d, %d)\t", i, j);
        printf("\n");
    }

    printf("\n\n");
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n");
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(i == 0 || j == 0 || i == 4 || j == 4) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
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