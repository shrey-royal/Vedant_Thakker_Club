#include<stdio.h>
#include<math.h>

int isArmStrong(int num) {
    int originalNum=num;
    int numOfDigits = (int)log10(num) + 1;
    int sum=0;
    while (num != 0)
    {
        int remainder = num % 10;
        sum += pow(remainder, numOfDigits);
        num /= 10;
    }
    return (sum == originalNum);
}

int isPerfect(int num) {
    int sum = 0;
    for (int i=1; i<num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}


int main() {
    int number;
    printf("\nInput any number: ");
    scanf("%d", &number);

    if(isArmStrong(number)) {
        printf("\nThe %d is an ArmStrong number.", number);
    } else {
        printf("\nThe %d is not an ArmStrong number.", number);
    }

    if(isPerfect(number)) {
        printf("\nThe %d is a Perfect number.", number);
    } else {
        printf("\nThe %d is not a Perfect number.", number);
    }

    return 0;
}