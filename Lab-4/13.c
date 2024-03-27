// 13
#include <stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter no. of employees: ");
	scanf("%d", &n);
	int sal[n];
	printf("Enter salary:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &sal[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sal[i]>=40000 && sal[i]<=60000)
		count++;
	}
	printf("No. of employees receiving salary between 40000 and 60000 is %d", count);
}
