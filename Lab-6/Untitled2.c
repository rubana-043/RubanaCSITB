// read and display details of book entered by user
#include <stdio.h>
struct book {
	int book_id;
	char name[20];
	char author[30];
	int price;
};
void main()
{
	struct book b = {4225, "Fourth Wing", "Rebecca Yarros", 500};
	printf("Book id=%d\n", b.book_id);
	printf("Name= %s\n", b.name);
	printf("Author=%s\n", b.author);
	printf("Price=%d", b.price);
}
