//4. Write a program to read N numbers and sort them in ascending order. (Using bubble sort)
#include <stdio.h>
void main() {
    int n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Enter a positive integer \n");
    }
    float numbers[n]; // Declaring array of size n
   // Input numbers into the array
  for (i = 0; i < n; i++) {
        printf("number %d: ", i+1);
        scanf("%f", &numbers[i]);
    }
    // Sorting the array using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap numbers[j] and numbers[j+1]
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    // Printing the sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", numbers[i]);
    }
   printf("\n");
}
