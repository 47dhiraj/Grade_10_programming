// Explicit TypeCasting

// It is explicitly(manually) done by a progmmer.

//  Examples of explicit type cast operator: (int), (float)


//// EXAMPLE 1

#include <stdio.h>

int main() 
{
	
    float distance = 183.7; 	// Distance travelled in KM
    float time = 3.05;       	// Time travelled in Hour
	
//	// without type casting
//	printf("\nThe average speed is %.2f km/h.\n", distance/time);
	
    // By explicitly typecasting resulting float value into integer using (int), by a programmer.
    printf("The average speed is %d km/h.\n", (int)(distance/time));
    
    
    getch();
    return 0;
}


// EXAMPLE 2

#include <stdio.h>

int main() 
{
	
    int total = 100;
    int count = 3;

    // Using explicit typecasting to calculate average
    
    printf("Average: %.2f\n", (float)total/count);			// Convert 'total' to float before division
    
//	printf("Average: %.2f\n", total/(float)count);			// Convert 'count' to float before division

//	printf("Average: %.2f\n", (float)total/(float)count);	// Convert both to float before division
    
    
	// whatever, the output: 33.33
    
    getch();
    return 0;
}

