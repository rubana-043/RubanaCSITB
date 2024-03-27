//9. Write a program to read N numbers in an array and find the sum of odd numbers.
#include <stdio.h>
int main() {
    int n, i;
    float numbers[100]; // Assuming a maximum of 100 numbers, adjust as needed
    float sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer for the number of elements.\n");
        return 1;
    }
    // Input numbers into the array
   printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }
    // Find the sum of odd numbers in the array
    for (i = 0; i < n; ++i) {
        if ((int)numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }
    // Print the sum of odd numbers
    printf("The sum of odd numbers is: %.2f\n", sum);
    return 0;
}
