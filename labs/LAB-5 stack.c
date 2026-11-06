#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int push(int item) {
    if (top == MAX - 1) {
        printf("stack overflow\n");
    }
    else {
        stack[++top] = item;
    }
}
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    }
    else {
        return stack[top--];
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("Popped item = %d\n", pop());
    printf("Popped item = %d\n", pop());
    printf("Popped item = %d\n", pop());
    return 0;
}
