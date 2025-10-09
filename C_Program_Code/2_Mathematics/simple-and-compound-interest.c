// WAP in C language to ask user to enter principal, time & rate and calculate simple interest and compund interest.

// [SI = (P*T*R)/100, CI = p*(pow((1+r/100), t)-1)]

#include <stdio.h>
#include <math.h>				// for using pow() function

int main() 
{
	
	float p, r, t, simpleInterest, compoundInterest;
    
    // Best way: single liner Input code
    printf("Enter the Principal amount, rate of interest & Time in years: ");
    scanf("%f, %f, %f", &p, &r, &t);
    
    
    // Calculate Simple Interest
    simpleInterest = p * t * r / 100;
    printf("\n Simple Interest = %.2f \n", simpleInterest);
    
    
    // Calculate Compound Interest
	compoundInterest = p * pow((1 + r / 100), t) - p;
	printf("\n Compound Interest = %.2f \n", compoundInterest);
    
    
    getch();			
    return 0;
}
