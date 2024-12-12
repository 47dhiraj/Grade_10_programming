// Write a menu driven program to repeat multiple times till user wants, and having the menus:
// 1. Finding area and perimeter of rectangle
// 2. Finding area and circumference of circle
// 3. Finding Simple Interest and Amount
// 4. Exit

#include <stdio.h>
#include <stdlib.h>		// for using exit(0);

void main() 
{
	
	const float PI = 3.14;
	int choice, l, b, a, p, r, c, area, principal, time, rate, SI, amount;
	
	system("cls");

	do {

		printf("\n1) Find area and perimeter of rectangle.\n"
		       "2) Find area and circumference of circle.\n"
		       "3) Find simple interest and amount.\n"
		       "4) Exit\n");

		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice) {
			case 1:

				printf("\nEnter length & breadth of rectangle:");
				scanf("%d %d", &l, &b);

				a = l * b;
				p = 2 * (l + b);

				printf("\nThe area of rectangle is %d\n"
				       "and the perimeter of rectangle is %d\n", a,p);

				break;

			case 2:

				printf("\nEnter the radius of circle:");
				scanf("%d", &r);

				c = 2 * PI * r;
				area = PI * r * r;

				printf("\nThe circumference of circle is %d\n"
				       "and the area of circle is %d\n", c, area);

				break;

			case 3:

				printf("\nEnter the Principal, Time & Rate:");
				scanf("%d %d %d", &principal, &time, &rate);

				SI = principal * time * rate / 100;
				amount = principal + SI;

				printf("\nThe interest is %d\n"
				       "and total amount is %d\n", SI, amount);

				break;

			case 4:
				exit(0);

			default:
				printf("Choice Error");
		}

	} while (choice != 4);

	}
