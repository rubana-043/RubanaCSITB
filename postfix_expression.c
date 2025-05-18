//program for postfix evaluation using stack 

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int stack[MAX];
int top = -1;

void push(int num) { stack[++top] = num; }

int pop() { return stack[top--]; }

int evaluatePostfix(char* expr) {
    int len = strlen(expr);
    for (int i = 0; i < len; i++) {
        if (expr[i] == ' ') continue;
        if (isdigit(expr[i])) {
            push(expr[i] - '0');
        }
        else {
            int b = pop();
            int a = pop();
            switch (expr[i]) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
                case '^': push((int)pow(a, b)); break;  
            }
        }
    }
    return pop(); 
}

int main() {
    char expr[MAX];
    printf("Enter a postfix expression: ");
    scanf(" %[^\n]", expr);
    int result = evaluatePostfix(expr);
    printf("Result: %d\n", result);

    return 0;
}
