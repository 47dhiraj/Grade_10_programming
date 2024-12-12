// WAP in C language to ask user to enter principal, time & rate and calculate simple interest and compund interest.
// [SI = (P*T*R)/100, CI = p*(pow((1+r/100), t)-1)]

#include <stdio.h>

#include <stdlib.h>			// for clearing screen
//#include <conio.h>

#include <math.h>			// for using pow() function


// main() function is int type, which means, main() function always returns an integer values like 0,1,-1 etc
// main() function can be void, which means, main() function won't return any thing(i.e no return)
int main() {			

	float p, r, t, simpleInterest, compoundInterest;
	
	// Code for clearing the screen in Dev c++ IDE
	#ifdef _WIN32
		system("cls"); 		// Clearing screen for windows OS
	#else
		system("clear"); 	// Clearning screen for Linux OS and MacOS
	#endif
	
	// Alternative for clering screen in Turbo C/C++
	//	clrscr();
    
    // Best way: single liner Input code
    printf("Enter the Principal amount, rate of interest & Time in years: ");
    scanf("%f, %f, %f", &p, &r, &t);
    
   	// Alternative: Multi liner Input code
	//    printf("Enter the principal amount: ");
	//    scanf("%f", &p);		// since principal is float 
	//    
	//    printf("Enter the rate of interest: ");
	//    scanf("%f", &r);
	//    
	//    printf("Enter the time in years: ");
	//    scanf("%f", &t);
    
    
    
    // Calculate Simple Interest
    simpleInterest = p * t * r / 100;
    printf("\n Simple Interest = %.2f \n", simpleInterest);
    
    
    // Calculate Compound Interest
	compoundInterest = p * pow((1 + r / 100), t) - p;
	printf("\n Compound Interest = %.2f \n", compoundInterest);
    
    
//    getch();			// used to pause the console/output screen until user presses the key
						// it also captures the key press without showing in the console
    
    return 0;  			// It indicates the program executed successfully without throwing any errors
    
//    return 1;			// It indicates, the program encounterd an error or unexpected condition.
//    return -1; 		// It indicates, the specific type of error in the program.
}
