#include <iostream>
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	(n%2==0)?
	(printf("%d is even number.",n)):
		(printf("%d is odd number.",n));
}
