#include <stdio.h>
#include <stdlib.h>
int largest(int *, int);
int smallest(int *, int);
int main()
{
	int *p;
	int n,i,s,l;
	printf("Enter how many no.: ");
	scanf("%d", &n);
	p=(int *)malloc(n*sizeof(int));
	
	if(p==NULL)
	{
		printf("Memory Allocation Failed.");
		exit (1);
	}
	
	for(i=0;i<n;i++)
	{
		printf("Enter number %d: ", i+1);
		scanf("%d", p+i);
	}
	l=largest(p,n);
	printf("Largest number is: %d\n", l);
	s=smallest(p, n);
	printf("Smallest is: %d", s);
	free (p);
	return 0;
}
int largest (int *p, int n)
{
	int l;
	int i;
	l=p[0];
	for(i=0;i<n;++i)
	{
		if(l<*(p+i))
		{
			l=*(p+i);
		}
	}
	return (l);
}
	
int smallest (int *p, int n)
{
	int s;
	int i;
	s=p[0];
	for(i=0;i<n;i++)
	{
		if(*(p+i)<s)
		{
			s=*(p+i);
		}
	}
	return (s);
}

/*#include <stdio.h>
#include <stdlib.h>
int findLargest(int *,int);
int findSmallest(int *, int);
int main() {
    int n,i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of elements should be positive.\n");
        return 1;
    }

    int *numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int largest = findLargest(numbers, n);
	int smallest = findSmallest(numbers, n);
    printf("Largest number: %d\n", largest);
	printf("Smallest number: %d\n", smallest);
    free(numbers); // Free dynamically allocated memory
    return 0;
}
int findLargest(int *numbers, int n) 
{
    int largest = numbers[0];
    int i;
    for ( i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    return largest;
}
int findSmallest(int *numbers, int n) 
{
    int smallest = numbers[0];
    int i;
    for ( i = 1; i < n; i++) {
        if (numbers[i] <smallest) {
            smallest = numbers[i];
        }
    }
    return smallest;
} */
	
	
