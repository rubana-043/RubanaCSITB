#include <stdio.h>
void main()
{
	int salary, tax, allowance, net;
	printf("Enter basic salary: ");
	scanf("%d", &salary);
	tax=0.36*salary;
	allowance=0.25*salary;
	net=salary+allowance-tax;
	printf("The tax is %d\n", tax);
	printf("The allowance is %d\n", allowance);
	printf("The net salary is %d", net);
}
