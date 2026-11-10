#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int push(int item) {
    if (top == MAX - 1) {
        printf("stack overflow\n");
        return 1;
    }
    else {
        stack[++top] = item;
    }
}
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return 1;
    }
    else {
        return stack[top--];
    }
}

void display() {
    for (int i = top; i >= 0; i--) {
        printf("%d \n", stack[i]);
        if (i==0) {
            printf("stack empty\n");
        }
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("Popped item = %d\n", pop());
    printf("Popped item = %d\n", pop());
    printf("Popped item = %d\n", pop());
    push(40);
    push(50);
    display();
    return 0;
}
