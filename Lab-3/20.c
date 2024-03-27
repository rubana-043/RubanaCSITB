// chess board pattern
#include <stdio.h>
void main()
{
	char bb,wb;
	bb= 255;
	wb=219;
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i%2==0)
			printf("%c%c", wb,bb);
			else
			printf("%c%c", bb,wb);
			
		}
	}
}
