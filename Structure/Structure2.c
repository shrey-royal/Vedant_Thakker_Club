#include<stdio.h>

struct Student {
    int rollNo;
    char name[10];
    float marks;
};

int main() {
    int size;
    printf("\nEnter the no. of students: ");
    scanf("%d", &size);

    struct Student s[size];

    for (int i = 0; i < size; i++) {
        printf("\nEnter rollNo: ");
        scanf("%d", &s[i].rollNo);

        printf("\nEnter name: ");
        scanf(" %[^\n]s", &s[i].name);

        printf("\nEnter marks: ");
        scanf("%f", &s[i].marks);
    }
    
    printf("\nStudent Details: \n-------------------------------------\nRollNo\tName\t\t Marks\n-------------------------------------");
    for (int i = 0; i < size; i++) {
        printf("\n%d\t%s\t%.2f", s[i].rollNo, s[i].name, s[i].marks);
        // printf("\n\nStudent %d: \n", i+1);
        // printf("\nRollNo: %d", s[i].rollNo);
        // printf("\nName: %s", s[i].name);
        // printf("\nMarks: %.2f", s[i].marks);
    }
    printf("\n-------------------------------------\n");

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