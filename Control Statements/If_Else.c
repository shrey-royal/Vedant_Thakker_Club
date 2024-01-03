#include<stdio.h>

void main() {
    int i = 0;

    if(i == 1) {
        printf("You can Apply!!!");
    } else {
        printf("You can Apply!!! (with phd pedegree)");
    }
}

/*
1. Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal


2. Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer


3. Write a C program to check whether a given number is positive or negative.
Test Data : 15
Expected Output :
15 is a positive number


4. Write a C program to find whether a given year is a leap year or not.
Test Data : 2016
Expected Output :
2016 is a leap year.


5. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
Test Data : 21
Expected Output :
Congratulation! You are eligible for casting your vote.


6. Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
Test Data : -5
Expected Output :
The value of n = -1


7. Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
Test Data : 135
Expected Output :
The person is Dwarf.


8. Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three


9. Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.


10. Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.


11. Write a C program to calculate the root of a quadratic equation.
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution.


12. Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.
Test Data :
Input the Roll Number of the student :784
Input the Name of the Student :James
Input the marks of Physics, Chemistry and Computer Application : 70 80 90
Expected Output :
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First


13. Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
Test Data :
42
Expected Output :
Its very hot.


14. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
Test Data :
50 50 60
Expected Output :
This is an isosceles triangle.


15. Write a C program to check whether a triangle can be formed with the given values for the angles.
Test Data :
40 55 65
Expected Output :
The triangle is not valid.


16. Write a C program to check whether a character is an alphabet, digit or special character.
Test Data :
@
Expected Output :
This is a special character.


17. Write a C program to check whether an alphabet is a vowel or a consonant.
Test Data :
k
Expected Output :
The alphabet is a consonant.


18. Write a C program to calculate profit and loss on a transaction.
Test Data :
500 700
Expected Output :
You can booked your profit amount : 200


19. Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer.

The charge are as follow :

Unit	Charge/unit
upto 199	@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above	@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

Test Data :
1001
James
800
Expected Output :
Customer IDNO :1001
Customer Name :James
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : 1600.00
Surchage Amount : 240.00
Net Amount Paid By the Customer : 1840.00



20. Write a program in C to accept a grade and declare the equivalent description :

Grade	Description
E	Excellent
V	Very Good
G	Good
A	Average
F	Fail
Test Data :
Input the grade :A
Expected Output :
You have chosen : Average


21. Write a C program to read any day number in integer and display the day name in word format.
Test Data :
4
Expected Output :
Thursday


22. Write a program in C to read any digit and display it in the word.
Test Data :
4
Expected Output :
Four


23. Write a C program for reading any Month Number and displaying the Month name as a word.
Test Data :
4
Expected Output :
April


24. Write a program in C to read any Month Number in integer and display the number of days for this month.
Test Data :
7
Expected Output :
Month have 31 days


25. Write a C program which computes the area of various geometrical shapes using a menu-driven approach.
Test Data :
1
5
Expected Output :
The area is : 78.500000


26. Write a program in C which is a Menu-Driven Program to perform a simple calculation.
Test Data :
10
2
3
Expected Output :
The Multiplication of 10 and 2 is: 20

------------------------------------------------------------------------------------------


1. Write a program that converts Centigrade to Fahrenheit.
Expected Output :
Input a temperature (in Centigrade): 45
113.000000 degrees Fahrenheit.


2. Write a C program that calculates the volume of a sphere.
Expected Output :
Input the radius of the sphere : 2.56
The volume of sphere is 70.276237.


3. Write a C program that prints the perimeter of a rectangle using its height and width as inputs.
Expected Output :
Input the height of the Rectangle : 5
Input the width of the Rectangle : 7
Perimeter of the Rectangle is : 24.000000


4. Write a C program that converts kilometers per hour to miles per hour.
Expected Output :
Input kilometers per hour: 15
9.320568 miles per hour


5. Write a C program that takes hours and minutes as input, and calculates the total number of minutes.
Expected Output :
Input hours: 5
Input minutes: 37
Total: 337 minutes.


6. Write a program in C that takes minutes as input, and display the total number of hours and minutes.
Expected Output :
Input minutes: 546
9 Hours, 6 Minutes


7. Write a program in C that reads a forename, surname and year of birth and displays the names and the year one after another sequentially.
Expected Output :
Input your firstname: Tom
Input your lastname: Davis
Input your year of birth: 1982
Tom Davis 1982


8. Write a program in C to calculate the sum of three numbers with input on one line separated by a comma.
Expected Output :
Input three numbers separated by comma : 5,10,15
The sum of three numbers : 30


9. Write a C program to perform addition, subtraction, multiplication and division of two numbers.
Expected Output :
Input any two numbers separated by comma : 10,5
The sum of the given numbers : 15
The difference of the given numbers : 5
The product of the given numbers : 50
The quotient of the given numbers : 2.000000


10. Write a C program to find the third angle of a triangle if two angles are given.
Expected Output :
Input two angles of triangle separated by comma : 50,70
Third angle of the triangle : 60

*/