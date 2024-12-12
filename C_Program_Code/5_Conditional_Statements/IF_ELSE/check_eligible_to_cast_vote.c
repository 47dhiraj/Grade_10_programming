// 7. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.

#include <stdio.h>

int main(){
	
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age >= 18 && age <= 125)
	{
		printf("\nYou are eligible to cast vote.\n");
	}
	else
	{
		printf("\nYou are not eligible to cast vote.\n");
	}
	
	
	return 0;	
}
