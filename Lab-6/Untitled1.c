// read and display record of students
#include <stdio.h>
struct student {
	int roll;
	char name[20];
	char gender [10];
	char address[30];
	float marks;
};
void main()
{
	struct student s={101, "Anup", "Male", "Thamel", 67.45};
	printf("Roll = %d\n", s.roll);
	printf("Name= %s\n", s.name);
	printf("Gender = %s\n", s.gender);
	printf("Address = %s\n", s.address);
	printf("Marks = %.2f\n", s.marks);
}
