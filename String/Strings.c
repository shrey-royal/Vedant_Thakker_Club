#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], str1[100];
    int i;
    // {'a', 'f', 'g', 'h'} - array
    // "afgh"               - string

    // Scanning the string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    // printf("\nstr = %s", str);

    // Printing the length of the string
    // printf("Length of the string is: %d\n", strlen(str));

    // Printing the string in lowercase
    // printf("\nString in lowercase is: %s", strlwr(str));

    // Printing the string in uppercase
    // printf("\nString in uppercase is: %s", strupr(str));

    // copying the string
    // strcpy(destination, source);
    fflush(stdin);  // To clear the buffer memory
    // printf("\nEnter a string: ");
    // scanf("%[^\n]s", str1);
    // strcpy(str, str1);
    // printf("\nString1 is: %s", str1);
    // printf("\nString(Copied) is: %s", str);
    
    // strcpy(str, gets(str1));    // gets() is used to scan the string with spaces
    // puts(str1);

    // Concatenating the string
    // strcat(destination, source);
    // strcat(str, " is a string");


    // Comparing the string
    // *str1 = "This is str1";
    // printf("\nEnter a string: ");
    // printf("\nstrcmp(str, str1) = %d", strcmp(str, gets(str1)));    // gets() is used to scan the string with spaces

    // Reversing the string
    // printf("\nString is: %s", strrev(str));

    // strstr() - Returns pointer to first occurence of a string within another string
    // printf("\nString is: %s", strstr(str, "is"));

    // strtok() - Breaks string into a series of tokens using a given delimiter
    char *token = strtok(str, " "); // " " is the delimiter
    while(token != NULL)    // NULL is used to stop the search
    {
        printf("\n%s", token);
        token = strtok(NULL, " ");  // NULL is used to continue the search from the previous string
    }

    // Printing the string
    printf("\nString is: %s", str);
    return 0;
}

/*
String Built-in Functions: 
    1. strlen() - Returns the length of the string
    2. strcpy() - Copies one string to another
    3. strcat() - Concatenates two strings
    4. strcmp() - Compares two strings
        {
            Returns 0 if both strings are equal
            Returns a positive value if first string is greater than second string
            Returns a negative value if first string is less than second string
        }
    5. strrev() - Reverses the string
    6. strlwr() - Converts string to lowercase
    7. strupr() - Converts string to uppercase
    8. strstr() - Returns pointer to first occurence of a string within another string
    9. strtok() - Breaks string into a series of tokens using a given delimiter
*/