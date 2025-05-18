#include <stdio.h>
#define MAX 5  
int stack[MAX], top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! No elements to pop\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

void peek()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Element in the top of the stack is: %d\n",stack[top]);
	}
}
int main() {
    push(10);
    push(20);
    push(30);
    pop();
    peek();
    push(40);
    peek();
    return 0;
}
