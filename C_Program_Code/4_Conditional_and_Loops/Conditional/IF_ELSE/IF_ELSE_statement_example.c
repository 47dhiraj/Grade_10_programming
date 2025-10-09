// WAP in C to enter a mark of any one subject and if the entered mark is greater than equals to 40 then print the result as pass otherwise print the result as fail.

#include <stdio.h>

int main(){
	
	int mark;
	
	printf("Enter mark of any one subject: ");
	scanf("%d", &mark);
	
	if(mark >= 40)
	{
		printf("\n Pass");
	}
	else
	{
		printf("\n Fail");
	}
	
	return 0;
}
