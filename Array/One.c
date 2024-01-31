#include<stdio.h>

void main() {
    int arr[5] = {23, 43, 23, 67, 45};
    // int arr[5];

    // printf("\nScanning the array: ");
    // for(int i=0; i<5; i++) {
    //     printf("\nEnter arr[%d]: ", i);
    //     scanf("%d", &arr[i]);
    // }

    // printf("\naddress = %u\n", &arr[5]);

    printf("\nPrinting the array: ");
    for (int i = 0; i < 5; i++) {
        // printf("%u, ", arr+i);
        printf("%d, ", arr[i]);
    }
}