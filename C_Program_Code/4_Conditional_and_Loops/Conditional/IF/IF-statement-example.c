// WAP in C to enter a mark of any one subject and if the entered marks is greater than equals to 40 then print the result as pass.

#include <stdio.h>

int main(){
	
	float mark;
	
	printf("Enter the marks of any one subject: ");
	scanf("%f", &mark);
	
	if(mark >= 40)
	{
		printf("\nPass");
	}
	
	return 0;
}
