//30. Write a program to read N words and sort them in alphabetical order.
#include <stdio.h>
#include <string.h>
void main() {
    int n,i,j;
    printf("Enter no. of words: ");
    scanf("%d", &n);
    char words[n][100];
    printf("Enter the words:\n");
    for (i = 0; i < n; i++) {  
        printf("%d: ", i + 1);
        scanf("%s", words[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                char temp[100];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
    printf("The sorted words are:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }
}

