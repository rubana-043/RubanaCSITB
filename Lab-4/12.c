//12. Write a program to read N numbers and display only prime numbers.
#include <stdio.h>
void main() {
    int N,i,j;
    printf("Enter no. of elements: ");
    scanf("%d", &N);
    int num[N];
    printf("Enter numbers:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }
    printf("Prime numbers are:\n");
    for (i = 0; i < N; i++) {
        int prime = 1;
        if (num[i] <= 1) {
            prime = 0;
        } else {
            for (j = 2; j * j <= num[i]; j++) {
                if (num[i] % j == 0) {
                    prime = 0;
                    break;
                }
            }
        }
        if (prime) {
            printf("%d ", num[i]);
        }
    }
    printf("\n");
}
