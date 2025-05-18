#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>  
#define SIZE 100  
char stack[SIZE];  
int top = -1;  
void push(char ch) {
    if (top < SIZE - 1)  
        stack[++top] = ch;  
}
char pop() {
    return (top >= 0) ? stack[top--] : '\0';
}
char peek() {
    return (top >= 0) ? stack[top] : '\0';
}
int precedence(char ch) {
    switch (ch) {
        case '+': case '-': return 1;
        case '*': case '/': return 2;
        case '^': return 3;  
        default: return 0;
    }
}
int isRightAssociative(char ch) {
    return (ch == '^'); 
}
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}
void infixToPostfix(char *infix, char *postfix) {
    int i, j = 0;

    for (i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        switch (ch) {
            case '(':  
                push(ch);
                break;

            case ')':  
                while (top != -1 && peek() != '(')  
                    postfix[j++] = pop();
                pop();  
                break;

            default:
                if (isalnum(ch)) {  
                    postfix[j++] = ch;
                } else if (isOperator(ch)) {  
                    while (top != -1 && precedence(peek()) > precedence(ch)) {
                        postfix[j++] = pop();
                    }
                    if (!isRightAssociative(ch)) {  
                        while (top != -1 && precedence(peek()) == precedence(ch))
                            postfix[j++] = pop();
                    }
                    push(ch);
                }
                break;
        }
    }
    while (top != -1)  
        postfix[j++] = pop();

    postfix[j] = '\0';  
}
void reverseString(char *str) {
    strrev(str);
}
void infixToPrefix(char *infix, char *prefix) {
    reverseString(infix);
    for (int i = 0; infix[i] != '\0'; i++) {
        if (infix[i] == '(') infix[i] = ')';
        else if (infix[i] == ')') infix[i] = '(';
    }
    infixToPostfix(infix, prefix);
    reverseString(prefix);
}
int main() {
    char infix[SIZE], result[SIZE];
    int choice;
    printf("Choose an option:\n");
    printf("1. Convert Infix to Postfix\n");
    printf("2. Convert Infix to Prefix\n");
    printf("3. Exit\n");
	do{
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:	
   			printf("\nEnter an infix expression: ");
    		scanf("%s", infix);
            infixToPostfix(infix, result);
            printf("Postfix Expression: %s\n", result);
            break;

        case 2:	
   			printf("\nEnter an infix expression: ");
   		 	scanf("%s", infix);
            infixToPrefix(infix, result);
            printf("Prefix Expression: %s\n", result);
            break;
            
        case 3:
        	printf("Exiting the program....");
        	break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            break;
    }
	}while(choice!=3);
    return 0;
}
