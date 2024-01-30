#include<stdio.h>

int isPrime(int num) {
    if(num <= 1) {
        return 0;
    }

    for (int i = 2; i*i <= num; i++) {
        if(num % i == 0) {
            return 0;   //Not prime
        }
    }
    return 1;   //Prime
}

int sumOfFirstPrimes(int n, int curr_n, int count, int sum) {
    if (count == n) return sum;

    if(isPrime(curr_n)) {
        printf("%d, ", curr_n);
        sum += curr_n;
        count++;
    }
    return sumOfFirstPrimes(n, curr_n+1, count, sum);
}

void main() {
    int n;

    printf("\nEnter the value n: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("\nPlease enter a +ve int > 0");
    } else {
        printf("\nSum of first %d primes is %d", n, sumOfFirstPrimes(n, 2, 0, 0));
    }
}