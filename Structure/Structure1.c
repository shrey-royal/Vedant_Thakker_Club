#include<stdio.h>

struct Student {
    int rollNo;
    char name[10];
    float marks;
};

int main() {
    struct Student s;

    printf("\nEnter rollNo: ");
    scanf("%d", &s.rollNo);

    printf("\nEnter name: ");
    scanf(" %[^\n]s", &s.name);

    printf("\nEnter marks: ");
    scanf("%f", &s.marks);

    printf("\nDisplaying Details of Student: ");
    printf("\nRollNo: %d", s.rollNo);
    printf("\nName: %s", s.name);
    printf("\nMarks: %.2f", s.marks);

    return 0;
}

/*
Structure consists of multiple data types.

syntax:

struct name {
    // variables
    int a;
    float arr[7];
    char r;
    .
    .
    .
}var_a; //way 1 of creating a structure variable (global)

i will have to create a structure variable in order to use this structure

struct name var_b;  //way 2 of creating a structure


*/