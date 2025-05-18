//program of infix evaluation using stack
#include <stdio.h>
#include <math.h> 
#define MAX 100
char opStack[MAX];
int opTop = -1;
int numStack[MAX];
int numTop = -1;
void pushOp(char op) { opStack[++opTop] = op; }
char popOp() { return opStack[opTop--]; }
void pushNum(int num) { numStack[++numTop] = num; }
int popNum() { return numStack[numTop--]; }
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}
int isRightAssociative(char op) {
return (op == '^'); 
}
int applyOp(int a, int b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b;
    if (op == '^') return (int)pow(a, b); 
    return 0;
}
int toInt(char c) { return c - '0'; }
int evaluateInfix(char* expr) {
    int i;
    for (i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == ' ') continue;
        if (expr[i] >= '0' && expr[i] <= '9') {
            int num = 0;
            while (expr[i] >= '0' && expr[i] <= '9') {
                num = num * 10 + toInt(expr[i]);
                i++;
            }
            i--; 
            pushNum(num);
        }
        else if (expr[i] == '(') {
            pushOp(expr[i]);
        }
        else if (expr[i] == ')') {
            while (opTop != -1 && opStack[opTop] != '(') {
                int b = popNum();
                int a = popNum();
                char op = popOp();
                pushNum(applyOp(a, b, op));
            }
            popOp();
        }
        else {
            while (opTop != -1 &&
((precedence(opStack[opTop]) > precedence(expr[i])) || 
                   (precedence(opStack[opTop]) == precedence(expr[i]) && !isRightAssociative(expr[i])))) {
                int b = popNum();
                int a = popNum();
                char op = popOp();
                pushNum(applyOp(a, b, op));
            }
            pushOp(expr[i]);
        }
    }
    while (opTop != -1) {
        int b = popNum();
        int a = popNum();
        char op = popOp();
        pushNum(applyOp(a, b, op));
    }
    return popNum();
}
int main() {
  char expr[MAX];
    printf("Enter an infix expression: ");
    fgets(expr, MAX, stdin);
    int result = evaluateInfix(expr);
    printf("Result: %d\n", result);
    return 0;
}
