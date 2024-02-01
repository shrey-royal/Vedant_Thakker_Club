#include<stdio.h>

int main() {
    //sizeof() - it returns the memory taken by the data type

    int arr[10] = {9, 234, 345, 546, 675, 678, 678, 23};

    printf("\nint = %d", sizeof(int));
    printf("\nfloat = %d", sizeof(float));
    printf("\ndouble = %d", sizeof(double));
    printf("\nchar = %d", sizeof(char));
    printf("\nlong double = %d", sizeof(long double));

    printf("\nsize of arr = %d", sizeof(arr)/sizeof(arr[0]));
    printf("\narr = %d", sizeof(arr));
    return 0;
}