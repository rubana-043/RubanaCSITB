#include <stdio.h>
void main()
{
	int i,j,temp,n;
	char choice;
	printf("Enter no. of intems: ");
	scanf("%d", &n);
	int item[n];
	printf("Enter items:\n");
	for(i=0;i<n;i++)
	{
		printf("%d: ", i+1);
		scanf("%d",&item[i]);
	}
	printf("Enter 'a' for ascending order or 'd' for descending order: ");
   scanf(" %c", &choice);
for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if ((choice == 'a' && item[j] > item[j + 1]) || (choice == 'd' && item[j] < item[j + 1])) {
                
                temp = item[j];
                item[j] = item[j + 1];
                item[j + 1] = temp;
            }
        }
    }
	if (choice == 'a')
        printf("Sorted items in ascending order:\n");
    else if (choice == 'd')
        printf("Sorted items in descending order:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", item[i]);
    }
	printf("\n");
}
