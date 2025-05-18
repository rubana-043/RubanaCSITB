//program of prefix evaluation using stack 
#include <stdio.h>
#include <string.h>
#include <math.h> 
#define MAX 100

int stack[MAX];
int top = -1;

void push(int num) { stack[++top] = num; }

int pop() { return stack[top--]; }

int evaluatePrefix(char* expr) {
    int len = strlen(expr);
    for (int i = len - 1; i >= 0; i--) {
        if (expr[i] == ' ') continue;

        if (expr[i] >= '0' && expr[i] <= '9') {
            push(expr[i] - '0');
        }
        else {
            int a = pop();
            int b = pop();
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
    printf("Enter a prefix expression: ");
    scanf(" %[^\n]", expr); 

    int result = evaluatePrefix(expr);
    printf("Result: %d\n", result);

    return 0;
}
