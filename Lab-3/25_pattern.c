#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    // declare the local variables  
    int i, j,k, m;   
    // outer loop define the total rows and i should be less than equal to rows  
    for ( i = 1; i <= 5; i++)  
    {  
        // inner loop define j should be less than equal to rows- i  
        for ( j = 1; j <= 5-i; j++)  
        {     
            printf (" ");   
        }  
        // use for loop where k is less than equal to i  
        for ( k = 1; k <= i; k++)  
        {  
            printf ("%d", k); // print the number  
        }  
        for (m = i-1; m >=1; m--)  
        {  
            printf("%d", m); // print the number  
        }  
        printf ("\n");  
    }  
    getch();  
}  