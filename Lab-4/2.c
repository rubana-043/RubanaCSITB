//to read N numbers from user and display the numbers, their sum and average
#include<stdio.h>
int main()
{
 float a[100], sum=0, avg;
 int i, n;
 
 printf("Enter n: ");
 scanf("%d", &n);
 /* Reading array */
 printf("Enter numbers:\n");
 for(i=0; i< n; i++)
 {
  printf("a[%d] = ", i);
  scanf("%f", &a[i]);
 }
 /* Finding sum */
 for(i=0; i< n; i++)
 {
  sum = sum + a[i];
 }
 /* Calculating average */
 avg = sum/n;
 /* Displaying Result */
 printf("Sum is %g\n", sum);
 printf("Average is %g", avg);
 
 return 0;
}
