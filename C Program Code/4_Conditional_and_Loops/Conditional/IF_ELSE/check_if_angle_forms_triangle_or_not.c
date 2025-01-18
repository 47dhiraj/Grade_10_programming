// 8. Write a C program to read 3 angles of a triangle and check whether the triangle can be formed or not.

#include <stdio.h>

int main() {
	
    float angle1, angle2, angle3;

    // Input the three angles of the triangle
    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    // Check if the sum of the angles of triangle = 180 degree and all angles are greater than 0 degree.
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) 
	{
        printf("The angles %.2f, %.2f, and %.2f can form a triangle.\n", angle1, angle2, angle3);
    } 
	else 
	{
        printf("The angles %.2f, %.2f, and %.2f cannot form a triangle.\n", angle1, angle2, angle3);
    }

    return 0;
}
