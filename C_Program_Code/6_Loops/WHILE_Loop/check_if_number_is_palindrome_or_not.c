// WAP in C to check whether the given no. is palindrome or not.

#include <stdio.h>

int main() {
	
    int num, originalNum, remainder;
    int reverse = 0; 				// bydefault value of integer variable in C program is 1, but we need 0,
									// So, we initiazlie value of reverse with 0 (i.e reverse = 0)
	
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) 
	{
        remainder = num % 10;
        
        reverse = reverse * 10 + remainder;
        
        num /= 10;					// num = num / 10; gives the quotent, not the 
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reverse) 
	{
        printf("\n %d is a palindrome.\n", originalNum);
    } else 
	{
        printf("\n %d is not a palindrome.\n", originalNum);
    }

    return 0;
}
