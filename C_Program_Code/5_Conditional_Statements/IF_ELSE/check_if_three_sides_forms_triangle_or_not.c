// WAP in C to input three sides of a triangle and check wheter a triangle can be formed or not.

#include <stdio.h>

int main(){
	
	float a, b, c;
	
	// Input three sides of the triangle
    printf("Enter the length of side 1, side2 and side3: ");
    scanf("%f %f %f", &a, &b, &c);
	
	// Check the conditions of the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) 
	{
        printf("The sides %.2f, %.2f, and %.2f can form a triangle.\n", a, b, c);
    } 
	else
	{
        printf("The sides %.2f, %.2f, and %.2f cannot form a triangle.\n", a, b, c);
    }
    
    
    return 0;
}
