/*
Programs: (HOMEWORK)

1. Write a C program to find the sum of all elements in an integer array.
2. Implement a C function to reverse the elements of an integer array in place.
3. Develop a C program to find the largest element in an array of integers.
4. Create a C function to merge two sorted integer arrays into a single sorted array.
5. Write a C program to remove duplicate elements from an integer array.
6. Implement a C function to rotate an array of integers to the left by a given number of positions.
7. Develop a C program to find the second largest element in an array of integers.
8. Create a C function to sort an array of integers in ascending order using the bubble sort algorithm.
9. Write a C program to find the frequency of each element in an integer array.
10. Implement a C function to check if an array of integers is a palindrome (reads the same forwards and backwards).
*/

#include<stdio.h>
#include<limits.h>

int sumOfArray(int arr[], int size) {
    int sum=0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];  //sum = sum + arr[i];
    }

    return sum;
}

void reverseArray(int arr[], int size) {
    int start=0, end=size-1;

    while(start < end) {
        //swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

//Bubble Sort Algorithm
void sortArray(int arr[], int size) {
    int i, temp=0;
    for (i = 0; i < size-1; i++) {        
        for (int j = i+1; j < size; j++) {
            if(arr[i] > arr[j]) {
                //swapping
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void isPalindrome(int arr[], int size) {
    int i, flag = 0;
    for(i=0; i<size/2; i++) {
        if(arr[i] != arr[size-i-1]) {
            flag = 1;
            break;            
        }
    }

    if(flag) {
        printf("\nArray is not palindrome.");
    } else {
        printf("\nArray is palindrome.");
    }
}

void secondLargestElement(int arr[], int size) {
    int i, max = arr[0], smax = arr[0];

    for(i=0; i<size; i++) {
        printf("%d\t%d\n", smax, max);
        if(max < arr[i]) {
            smax = max;
            max = arr[i];
        } else if(smax < arr[i] && smax != max) {
            smax = arr[i];
        }
    }

    printf("\nSecond largest element is %d", smax);
}

void printArray(int arr[], int size) {
    printf("\narr[%d] = { ", size);
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\b\b }\n");
}

int main() {
    int arr[] = { 48, 10, 16, 97, 92, 91, 90, 2, 33, 52 };
    // int arr[] = {1, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // printf("sum is %d", sumOfArray(arr));

    // printf("\nOriginal Array: \n");
    // printArray(arr, size);

    // reverseArray(arr, size);

    // printf("\nReversed Array: \n");
    // printArray(arr, size);

    printArray(arr, size);

    // printf("findMax(): %d", findMax(arr, size));

    // sortArray(arr, size);

    printArray(arr, size);
    // isPalindrome(arr, size);
    secondLargestElement(arr, size);
    
    return 0;
}