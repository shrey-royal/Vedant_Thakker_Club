#include<stdio.h>

struct Student {
    int rollNo;
    char name[10];
    float marks;
};

struct Student scan() {
    struct Student student;

    printf("\nEnter rollNo: ");
    scanf("%d", &student.rollNo);
    
    printf("\nEnter name: ");
    scanf(" %[^\n]s", &student.name);
    
    printf("\nEnter marks: ");
    scanf("%f", &student.marks);

    return student;
}

void display(struct Student student) {
    printf("\nRollNo: %d", student.rollNo);
    printf("\nName: %s", student.name);
    printf("\nMarks: %.2f", student.marks);
    printf("\n");
}

int main() {
    int size;
    printf("\nEnter the no. of students: ");
    scanf("%d", &size);

    struct Student s[size];

    //scanning students
    for (int i = 0; i < size; i++) {
        s[i] = scan();
    }
    
    //printing students
    printf("\nStudent Details:");
    for(int i = 0; i < size; i++) {
        display(s[i]);
    }
    printf("\n");

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