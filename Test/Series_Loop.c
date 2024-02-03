#include<stdio.h>

int factorial(int n) {
    if(n == 0 || n == 1) return 1;
    else return n * factorial(n-1);
}

float seriesSum() {
    float sum=0;
    int i;
    for(i=1; i<=5; i++) sum += factorial(i)/i;
    return sum;
}

int main() {
    float sum = seriesSum();
    printf("\nThe sum of the series is: %.2f", sum);
    return 0;
}