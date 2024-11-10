#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int val) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = val;
        printf("Pushed %d to stack\n", val);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("Popped %d from stack\n", stack[top--]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}
