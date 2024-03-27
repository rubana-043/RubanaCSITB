/* 
ABCDEEDCBA
ABCD DCBA
ABC CBA
AB BA
A A
*/
#include <stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<=5;i++)
	{
		for(j=65;j<=69-i;j++)
		printf("%c", j);
		
		for(k=1;k<=2*i;k++)
		printf(" ");
		
		for(j=69-i;j>=65;j--)
		printf("%c", j);
		printf("\n");
	}
}
