#include <stdio.h>
#include <string.h>

int main() 
{
	int i;
    char str[] = "NEPAL";
    
    for(i=0; i <= strlen(str); i++)
    {
    	printf("\n str[%d]: %c \n", i, str[i]);
		
		if (str[i] == '\0'){
			printf("\n Null character is found at str[%d]", i);			
		}	
	}
	
	getch();
    return 0;
}

