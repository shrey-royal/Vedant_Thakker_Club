#include<stdio.h>
#include<stdlib.h>

void main() {
    int inputArray[10], even[10], odd[10], oddIndex, evenIndex;
    
    oddIndex = evenIndex = 0;

    for (int i = 0; i < 10; i++) {
        // printf("\nEnter inputArray[%d]: ", i);
        // scanf("%d", &inputArray[i]);
        inputArray[i] = rand() % 100;
    }

    for (int i = 0; i < 10; i++) {
        if(inputArray[i]%2 == 0) even[evenIndex++] = inputArray[i];
        else odd[oddIndex++] = inputArray[i];
    }

    printf("\neven[%d] = { ", evenIndex);
    for (int i = 0; i < evenIndex; i++) {
        printf("%d, ", even[i]);
    }
    printf("\b\b }\n");
    
    printf("\nodd[%d] = { ", oddIndex);
    for (int i = 0; i < oddIndex; i++) {
        printf("%d, ", odd[i]);
    }
    printf("\b\b }\n");
    
}