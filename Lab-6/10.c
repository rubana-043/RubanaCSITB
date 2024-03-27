#include <stdio.h>
void count (char *);
int main()
{
	char s[80];
	printf("Enter string: ");
	gets(s);
	char *p=s;
	count (p);
}
void count (char *p)
{
	int i;
	int v=0,c=0,d=0,sp=0,ot=0;
	for(i=0;p[i]!='\0';i++)
	{
		if(p[i]>='a'&&p[i]<='z'|| p[i]>='A'&&p[i]<='Z')
		{
			if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'&& p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U')
			v++;
			else
			c++;
		}
		else if(p[i]>='0' && p[i]<='9')
		d++;
		else if(p[i]==' ')
		sp++;
		else
		{
			ot++;
		}
		
	}
	printf("Vowel=%d\nConsonant=%d\nDigit=%d\nSpace=%d\nOthers=%d\n", v,c,d,sp,ot);
	return 0;
}
