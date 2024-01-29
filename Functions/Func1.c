#include<stdio.h>
#include<math.h>

double compoundInterest(double principalAmount, double RateOfInterest, double timePeriod) {
    //A(mount) = P(rincipal Amount) x (1 + (R(ate of interest/100))^T(ime period)
    
    // double Amount;
    // Amount = principalAmount * pow((1+RateOfInterest/100), timePeriod);
    // Amount -= principalAmount;
    // return Amount;
    
    
    return (principalAmount * pow((1+RateOfInterest/100), timePeriod)) - principalAmount;
}


void main() {
    double principal, interest, time, result;

    printf("\nEnter the Principal Amount: ");
    scanf("%lf", &principal);

    printf("\nEnter the Interest Rate: ");
    scanf("%lf", &interest);

    printf("\nEnter the Time: ");
    scanf("%lf", &time);

    result = compoundInterest(principal, interest, time);

    printf("\nCompound Intereston %.2lf is %.2lf", principal, result);
}