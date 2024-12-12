// WAP in C language to convert temperature from Centigrade to Fahrenheit. 
// [ f = (9.0 / 5.0) * c + 32 ]

#include <stdio.h>
#include <math.h>

int main() {
	
	float f, c;
	
	printf("Enter temperature in Centigrade: ");
	scanf("%f", &c);
	
	// 9 / 5 garna paudaina, becuase 1.8 lai automatic integer ma laijancha i.e 1 dincha, which is wrong.
	// So, 9.0 / 5.0 garesi hamilai chaiyeko value 1.8 paincha
	f = (9.0 / 5.0) * c + 32;	
	
	printf("\nThe temperature in Fahrenheit is: %.2f .", f);
	
	getch();
	
	return 0;	
}
