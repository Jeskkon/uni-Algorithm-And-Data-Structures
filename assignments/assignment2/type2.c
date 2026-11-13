#include <stdio.h>
#define STACK_SIZE 6

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

int peek() {
    return stack[top];
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
    printf("\n1) Add a new box");
    printf("\n2) Remove the last box");
    printf("\n3) Check the last box");
    printf("\n4) Exit");
    printf("\n");
}

int main () {
    int choice;
    printf("\n==== WAREHOUSE BOX MANAGEMENT ====\n");
    while (1) {
        showMenu();
        scanf("%d", &choice);

        int box_id = 0;
        switch (choice) {

            case 1:
                printf("\nEnter the box id: ");
                scanf("%d", &box_id);
                push(box_id);
                box_id = 0;
                break;

            case 2:
                printf("\nBox %d removed", pop());
                break;

            case 3:
                printf("Last added box: %d", peek());
                break;

            case 4:
                printf("Exiting the system...");
                return 0;

            default: printf("Invalid choice\n");
        }
    }
}
