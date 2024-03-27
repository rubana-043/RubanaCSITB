//Write a numbers to find largest and smallest number from set of N numbers entered by users.
#include<stdio.h>
int main()
{
 int a[50], lg,sm,i,n;
 printf("Enter n: ");
 scanf("%d", &n);
 /* Reading array */
 printf("Enter numbers:\n");
 for(i=0;i< n;i++)
 {
  printf("a[%d] = ",i);
  scanf("%d", &a[i]);
 }
 /* Finding large */
 lg = a[0];
 for(i=0;i< n;i++)
 {
  if(a[i]>lg)
  {
   lg = a[i];
  }
 }
sm = a[0];
 for(i=0;i< n;i++)
 {
  if(a[i] < sm)
  {
   sm = a[i];
  }
 }
 printf("\nSmall = %d", sm);
 printf("\nLarge = %d", lg);
 return 0;
}
