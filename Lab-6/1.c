//1 
#include <stdio.h>
#include <string.h>
struct book {
	int bookid;
	char author[20];
	char title[30];
	int price;
}s[10];
void main()
{
	int i;
	printf("Enter records of book\n");
	for(i=0;i<10;i++)
	{
		printf("Enter book id: ");
		scanf("%d", &s[i].bookid);
		fflush(stdin);
		printf("Enter author: ");
		gets(s[i].author);
		printf("Enter title: ");
		gets(s[i].title);
		printf("Enter price: ");
		scanf("%d", &s[i].price);
	}
	for(i=0;i<10;i++)
	{
		if(strcmp(s[i].author,"Dinesh Khadka")==0)
		{
			printf("%d\t%s\t%s\t%d\n", s[i].bookid, s[i].author, s[i].title, s[i].price);
		}
	}
}
