/*
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
*/

#include<stdio.h>

void main() {
    int customerID, units;
    char customerName;
    float charges, surcharge=0, totalAmount;

    printf("\nEnter the customerID: ");
    scanf("%d", &customerID);

    printf("\nEnter the Customer Name: ");
    scanf(" %c", &customerName);

    printf("\nEnter Units Consumed: ");
    scanf("%d", &units);

    if(units <= 199) {
        charges = units * 1.20;
    } else if(units >= 200 && units < 400) {
        charges = units * 1.50;
    } else if(units >= 400 && units < 600) {
        charges = units * 1.80;
    } else {
        charges = units * 2.00;
    }

    if(charges > 400) {
        surcharge = charges * 0.15;
    }

    totalAmount = charges + surcharge;

    if(totalAmount < 100) {
        totalAmount = 100;
    }

    printf("\nCustomer IDNO: %d", customerID);
    printf("\nCustomer Name: %c", customerName);
    printf("\nUnits Consumed: %d", units);
    printf("\nAmount Charges @Rs. %.2f per unit: %.2f", (charges/units), charges);
    printf("\nSurcharge Amount: %.2f", surcharge);
    printf("\nNet Amount Paid By the Customer : %.2f", totalAmount);
}