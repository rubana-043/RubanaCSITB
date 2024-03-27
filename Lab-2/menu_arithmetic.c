#include<stdio.h>
void main()
{
    float a,b;
    int choice;
    printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values of a & b: ");
    scanf("%f %f",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1	:
        printf("Sum of %g and %g is %g.",a,b,a+b);
        break;
    case 2	:
        printf("Difference of %.2f and %.2f is %.2f.",a,b,a-b);
        break;
    case 3	:
        printf("Multiplication of %.2f and %.2f is %.2f.",a,b,a*b);
        break;
    case 4	:
        printf("Division of Two Numbers is %.2f. ",a/b);
        break;
    default	:
        printf(" Enter Correct Choice.");
        break;
    }
}
