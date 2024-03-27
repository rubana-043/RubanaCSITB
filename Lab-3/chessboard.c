// chess board pattern
#include <stdio.h>
void main()
{
	char bb=255,wb=219;
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if((i+j)%2==0)
			printf("%c%c",wb,wb);
			else
			printf("%c%c",bb,bb);
			
		}
		printf("\n");
	}
}
