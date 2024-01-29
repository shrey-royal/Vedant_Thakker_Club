#include<stdio.h>

int factorial(int n) {
    //Base case: if n is - or 1, return 1
    if(n == 0 || n == 1) return 1;

    //Recursive case: return n times the factorial of (n-1)
    else return n * factorial(n-1);
}

void main() {
    int num = 5;
    printf("\nFactorial of %d is %d", num, factorial(num));
}

/*
Recursion in C is a programming technique where a function calls itself in order to solve a problem. It's a powerful and elegant way to solve certain types of problems, especially those that can be broken down into smaller, similar subproblems.

Here's a basic example of a recursive function in C that calculates the factorial of a number:

#include <stdio.h>

int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: return n times the factorial of (n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}


In this example, the 'factorial' function calls itself with a smaller argument ('n-1') until it reaches the base case ('n == 0' or 'n == 1'), at which point it stops recursing and starts returning values back up the call stack.

Recursion consists of two main parts:

1. Base Case: This is the terminating condition that prevents the function from recursing indefinitely. In the example above, the base case is when 'n' is 0 or 1, where the function returns 1 without making any further recursive calls.

2. Recursive Case: This is the part of the function where it calls itself with modified arguments. In the example above, the recursive case calculates the factorial of 'n' by multiplying 'n' with the factorial of 'n-1'.

Recursion provides a concise way to solve certain types of problems, especially those that can be divided into smaller, similar subproblems. However, excessive recursion can lead to stack overflow errors due to the limited size of the call stack. In such cases, iteration or other techniques may be more appropriate.


Tasks:

1. Fibonacci Sequence: Write a program to print the Fibonacci sequence up to a given number `n` using recursion.

2. Sum of Digits: Write a program to find the sum of digits of a given number using recursion.

3. Factorial: Write a program to calculate the factorial of a given number using recursion.

4. Power Function: Write a program to calculate the power of a number using recursion.

5. Greatest Common Divisor (GCD): Write a program to find the greatest common divisor (GCD) of two numbers using recursion.

6. Tower of Hanoi: Write a program to solve the Tower of Hanoi puzzle using recursion.

towerOfHanoi(n, 'A', 'B', 'C');
Number of disks: 3


Tower of Hanoi with 3 disks:
Move disk 1 from rod A to rod C
Move disk 2 from rod A to rod B
Move disk 1 from rod C to rod B
Move disk 3 from rod A to rod C
Move disk 1 from rod B to rod A
Move disk 2 from rod B to rod C
Move disk 1 from rod A to rod C

7. Palindrome Check: Write a program to check if a given string is a palindrome or not using recursion.

8. Permutations and Combinations: Write a program to generate permutations and combinations of a given set of elements using recursion.


Homework: 5, 6, 8

*/