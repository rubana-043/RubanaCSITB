// copying structure
#include <stdio.h>
struct student {
	int roll;
	char name[20];
	float marks;
}s1, s2;
void main()
{
	struct student s1={101, "Winter", 89.34};
	s2=s1;
	printf("Records of s2:\n");
	printf("Roll=%d\n", s2.roll);
	printf("Name=%s\n", s2.name);
	printf("Marks=%f", s2.marks);
}
