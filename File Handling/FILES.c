#include<stdio.h>   //rojnu
#include<stdlib.h>  //??
#include<string.h>  //string

#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
};

//CRUD
void createRecord();
void readRecord();
void updateRecord();
void deleteRecord();

int main() {
    int choice;

    do {
        printf("\nCRUD Operations on Student Records\n");
        printf("1. Create Record\n");
        printf("2. Read Record\n");
        printf("3. Update Record\n");
        printf("4. Delete Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                createRecord();
                break;
            case 2:
                readRecord();
                break;
            case 3:
                updateRecord();
                break;
            case 4:
                deleteRecord();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while(choice != 5);

    return 0;
}

void createRecord() {
    struct Student s;
    FILE *file = fopen("students.txt", "a");

    if(file == NULL) {
        printf("\nError opening file");
        return; //end the function
    }

    printf("\nEnter name of Student: ");
    scanf(" %[^\n]s", s.name);

    printf("\nEnter age of Student: ");
    scanf("%d", &s.age);

    fprintf(file, "%s %d\n", s.name, s.age);

    fclose(file);
}

void readRecord() {
    struct Student s;
    FILE *file = fopen("students.txt", "r");

    if(file == NULL) {
        printf("\nError opening file or file does not exist!");
        return;
    }

    printf("\nStudent Record:\n");
    char line[MAX_NAME_LENGTH+5];
    while (fgets(line, sizeof(line), file) != NULL) {   //EOF = -1
        // printf("Name: %s, Age: %d\n", s.name, s.age);
        printf("%s", line);
    }

    fclose(file);
}

void updateRecord() {
    char searchName[MAX_NAME_LENGTH];
    int newAge;

    printf("\nEnter the name of the student to update: ");
    scanf(" %[^\n]s", searchName);

    FILE *file = fopen("students.txt", "r+");
    FILE *tempFile = fopen("temp.txt", "w");

    if(file == NULL || tempFile == NULL) {
        printf("\nError opening File!");
        return;
    }

    struct Student s;
    char line[MAX_NAME_LENGTH + 5];
    while (fgets(line, sizeof(line), file) != NULL) {   //EOF = -1
        sscanf(line, "%[^\n]s %d", s.name, &s.age);
        if(strcmp(s.name, searchName) == 0) {
            printf("Enter new age for %s: ", s.name);
            scanf("%d", &s.age);
            s.age = newAge;
        }
        fprintf(tempFile, "%s %d\n", s.name, s.age);
    }

    fclose(file);
    fclose(tempFile);

    remove("students.txt");
    rename("temp.txt", "students.txt");

    printf("\nRecord updated successfully!");
}

void deleteRecord() {
    char searchName[MAX_NAME_LENGTH];

    printf("Enter the name of the student to delete: ");
    scanf("%s", searchName);

    FILE *file = fopen("students.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");

    if(file == NULL || tempFile == NULL) {
        printf("\nError opening File!");
        return;
    }

    struct Student s;

    while (fscanf(file, "%s %d", s.name, &s.age) != EOF) {   //EOF = -1
        if(strcmp(s.name, searchName) != 0) {
            fprintf(tempFile, "%s %d\n", s.name, s.age);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("students.txt");
    rename("temp.txt", "students.txt");

    printf("\nRecord deleted successfully!");
}