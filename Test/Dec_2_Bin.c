#include<stdio.h>

void decimalToBinary(int num) {
    int binary[32];
    int i=0;

    while(num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }

    printf("\nThe Binary value is: ");
    for (int j=i-1; j>=0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimalNum;
    printf("\nInput any decimal number: ");
    scanf("%d", &decimalNum);

    decimalToBinary(decimalNum);

    return 0;
}