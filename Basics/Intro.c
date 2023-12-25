//Documentation Section
/*
    Author: Shrey K
    DOC: 25/dec/23
    Purpose: to understand the structure of c program
*/

//Link Section
#include<stdio.h>   //Standard Input Output header file

//Defination section
//Global Declaration Section

//Function Section
void main() {
    int _int;
    float _float;
    char _char;
    double _double;

    // printf("Hello World!");
    // printf("\nint = %d\tfloat = %.3f\t\tchar = %c", 1234, 222.322, 'd');

    printf("\nEnter _int: ");
    scanf("%d", &_int);

    // printf("\nEnter _float: ");
    // scanf("%f", &_float);

    // printf("\n_int: %d\n_float: %.2f", _int, _float);
    // printf("\nAddresses:\n_int: %u\n_float: %x", &_int, _float);
    printf("\nThe number you\b\b\b\b entered is: \'%d\"\b ", _int);

}



//Sub_program Section



/*
Tasks:

1. Wap TO Print message “Welcome to the world of c”
Output 
Welcome to the world of c

2. WAP to print BIO-DATA
Output 
My bio-data
NAME:- ANANYA .A. KOLKARI
DATE OF BIRTH :- DATE-MONTH-YEAR
ADDRESS :- AHMEDABAD-380050

3. WAP to print Bio-Data using Escape sequences as „\t‟ , „\n‟ , „\”‟ (double quotes), „\‟‟ (Single Quotes)
Output :-
Name : ANANYA A. KOTHARI
Address : “DevKutir” Bunglows, Navrangpura
Education : B. Com, PGDCA
Computers : C language,C++,PHP
 MySQL,Oracle

4. Get & print integer , float(real) and character.
Output :
Enter a character :m
Enter Integer :3
Enter Real number / Decimal number :22.33
Character =m
Integer =3
Real number / Decimal number =22.330000

*/


/*
# - Pre Processor
include - directory

#include - preprocessor directive
stdio.h - standard input output header file


printf and scanf are two functions that are used to print and scan data from the console.
printf is used to print data to the console.
scanf is used to scan data from the console.
both these functions are defined in stdio.h header file.

syntax:
printf("format string", list of variables);
scanf("format string (format specifiers)", &list of variables); (note the &(address of) sign)


in order to print/scan the data of a variable, we use format specifiers.
format specifiers are used to tell the compiler what type of data is to be printed/scanned.

%i - short
%d - integer
%f - float
%c - character
%s - string
%lf - double
%ld - long double
%lld - long long double
%o - octal
%x - hexadecimal
%e - exponential
%p - pointer

to format the data, we use escape sequences.

\n - new line
\t - tab
\b - backspace
\r - carriage return (exclude)
\\ - backslash
\' - single quote
\" - double quote


scanf function: scan formatted
syntax:
    scanf("format specifiers (only): ", &args);

& - addressof operator (returns the address)


*/