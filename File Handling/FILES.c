#include<stdio.h>

int main() {
    FILE *file;
    char input[100], ch;

    // file = fopen("file.txt", "a");

    // if (file == NULL) {
    //     printf("Error opening file for writing.\n");
    //     return 1;   //abnormal  termination
    // }

    // printf("\nEnter some text: ");
    // scanf("%[^\n]s", input);

    // fprintf(file, "\n%s", input);

    // fclose(file);

    file = fopen("file.txt", "r");

    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;   //abnormal  termination
    }

    printf("\nContent of the file: \n");
    // while(fgets(input, sizeof(input), file) != NULL) {
    //     printf("%s", input);
    // }

    while((ch = fgetc(file)) != EOF) {
        if(ch == ' ') {
            ch = '_';
        }
        printf("%c", ch);
    }

    fclose(file);

    return 0;   //normal termination
}