#include<stdio.h>

void main() {
    int i, j, k;


    for(i=0; i<=5; i++) {
        for(k=5; k>i; k--) {
            printf("  ");
        }
        /*
         * Print star for last row (i==rows),
         * first column(j==0) and for
         * last column (j==(2*i-2)).
         */ 
        for(j=0; j<(2*i-1); j++) {
            if(j == 0 || i == 5 || j == (2*i-2)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}