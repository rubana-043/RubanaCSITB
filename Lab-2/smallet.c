/* smallest among four */
#include <stdio.h>
void main() { 
    int num1, num2, num3, num4, smallest;
 	printf("Enter four numbers: "); 
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4); 
	smallest = num1; 
 	if (num2 < smallest) 
        smallest = num2; 
    if (num3 < smallest) 
        smallest = num3; 
    if (num4 < smallest) 
        smallest = num4;
 	printf("Smallest number: %d", smallest); 
} 
