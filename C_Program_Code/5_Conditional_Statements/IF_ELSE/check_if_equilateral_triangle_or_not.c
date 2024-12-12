// WAP in C to enter 3 angles of a triangle and check whether it is equilateral triangle or not.

#include <stdio.h>

int main(){
	
	float a, b, c;
	
	printf("Enter three angles of a triangle: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a + b + c == 180 && a > 0 && b > 0 && c > 0)
	{
		if(a == 60 && b == 60 && c ==60)
		{
			printf("The angles %.2f, %.2f and %.2f forms an equilateral triangle.", a,b,c);
		}
		else
		{
			printf("The angles %.2f, %.2f and %.2f doesn't forms an equilateral triangle.", a,b,c);
		}
	}
	else
	{
		printf("The angles %.2f, %.2f and %.2f doesn't form triangle.", a,b,c);
	}
	
	return 0;
}
