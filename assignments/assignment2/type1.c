
#define STACK_SIZE 7
#include <stdio.h>

int stack[STACK_SIZE];
int top = -1;

void push(int data) {
    if ( top == STACK_SIZE - 1) {
        printf("stack overflow\n");
    }
    else {
        stack[++top] = data;
    }
}

int pop() {
    if (top == -1) {
        printf("stack underflow\n");
        return -1;
    }
    return stack[top--];
}

void peek() {
    printf("\ntop value: %d", stack[top]);
}

void isEmpty() {
    if (top == -1) {
        printf("Stack is empty\n");
    }
}

void isFull() {
    if (top == STACK_SIZE - 1) {
        printf("Stack is full\n");
    }
}

void showMenu() {
    printf("\nPlease choose one of the following options:");
    printf("\n1) Add a new tray");
    printf("\n2) Give a tray to a customer");
    printf("\n3) Check the next available tray");
    printf("\n4) Exit");
    printf("\n");
}
int main () {
    int choice;
    printf("\n====CAFETERIA TRAY MANAGEMENT====\n");
    int tray = 100;
    while (1) {
        showMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push(++tray);
                printf("\nTray %d added successfully", tray);
                break;
            case 2: pop();break;
            case 3: peek();break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}