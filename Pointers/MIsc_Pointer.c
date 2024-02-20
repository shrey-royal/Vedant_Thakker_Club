#include<stdio.h>
#include<stdlib.h>

void swap(int *, int *);
void sumOfArray(int *, int);

int main() {
    //void pointer
    // void *ptr = NULL;  //void ptr can be converted to any data type

    // int a = 23;
    // ptr = &a;

    // printf("\nEnter a: ");
    // scanf("%d", ptr);

    // int a = 23;
    // ptr = &a;

    // ptr = NULL; //null pointer

    // float b = 2.332;
    // ptr = &b;


    // printf("\na = %d", *(int *)ptr);
    // printf("\nb = %.2f", *(float *)ptr);

    // int a = 34, b = 12;
    // int *const ptr = &a;

    // ptr = &a;
    // *ptr = 45;

    // printf("\na = %d\tb = %d", *ptr, *ptr);

    // const int c = 23;
    // c = 24;

    // int a=34, b=23, *p1 = &a, *p2 = &b;
    
    // printf("\n1 = %d, b = %d", *p1, *p2);
    // swap(p1, p2);
    // swap(&a, &b);
    // printf("\n1 = %d, b = %d", *p1, *p2);

    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 10;
    }

    printf("\n\n\n");
    sumOfArray(arr, 10);    
    


    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sumOfArray(int *arr, int size) {
    int sum=0;
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
        sum += arr[i];
    }
    printf("\nSum of Array is %d", sum);
}