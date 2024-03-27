// sum of diagonal element
#include <stdio.h>
#define MAX 5
void main()
{
	int n,i,j,m[MAX][MAX];
	int sum=0;
	printf("Enter size of square matrix: ");
	scanf("%d", &n);
	printf("The elements of matrix: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &m[i][j]);
		}
	}
	printf("The matirx is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%6d", m[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < n; i++) {
        sum += m[i][i];
    }
    printf("The sum of diagonal elements is: %d", sum);
}
