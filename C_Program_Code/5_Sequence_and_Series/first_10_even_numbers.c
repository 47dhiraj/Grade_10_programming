// Write a program in C to display first 10 even numbers.

#include <stdio.h>

int main()
{
	
    int i;

//    // Loop to print the first 10 even numbers
//    for (i = 1; i <= 10; i++)
//    {
//        printf("%d ", i * 2);
//    }
	
	
	// Loop to print the first 10 even numbers
    for (i = 2; i <= 20; i += 2)
    {
        printf("%d ", i);
    }
	
	
	getch();
    return 0;
}

