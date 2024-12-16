#include <stdio.h>

// Static iteration of an array(Initially knowing the size of an array)
int main() 
{
	int i;
    int num[5] = {1, 2, 3, 4, 5};

    for (i = 0; i < 5; i++) 
	{
        printf("\n %d", num[i]);
    }

    return 0;
}


//#include <stdio.h>
//
//int main() 
//{
//	int i, length;
//    int num[] = {1, 2, 3, 4, 5};
//    
//    // SYNTAX to find size of array in c: sizeof(array) / sizeof(first_element)
//    length = sizeof(num) / sizeof(num[0]);
//
//    for (i = 0; i < length; i++) 
//	{
//        printf("\n %d", num[i]);
//    }
//
//    return 0;
//}

