// Understanding the working of pow() function

// To use pow() function, u must use <math.h> header file.

// pow() function returns double value.

// So, if u want to display pow() calculated value as integer, u must first typecast double returned value into integer using (int)

#include <stdio.h>
#include <math.h>

int main() 
{
    int i;
    
    for (i=1; i <= 10; i++) 
	{
		// without using pow()
		printf("%d ", i * i);	
		
		// with using pow() function
//		printf("%d ", (int)pow(i, 2));	// Typecasting double returned value to integer using (int)
	}
    
    
	getch();
    return 0;
}
