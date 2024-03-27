// fibonacci
#include <stdio.h>
void main()
{
	int f0=0,f1=1,f2,n,i;
	printf("enter number of terms: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("%5d", f0);
		f2=f0+f1;
		f0=f1;
		f1=f2;
	}
	
}
