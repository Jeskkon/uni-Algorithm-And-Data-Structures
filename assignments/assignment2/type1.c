#include <stdio.h>
#define STACK_SIZE 7

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
    printf("\n1) Add a new tray");
    printf("\n2) Remove the last tray");
    printf("\n3) Check the last tray");
    printf("\n4) Exit");
    printf("\n");
}

int main () {
    int choice;
    printf("\n==== CAFETERIA TRAY MANAGEMENT ====\n");
    while (1) {
        showMenu();
        scanf("%d", &choice);

        int tray_id = 0;
        switch (choice) {

            case 1:
                printf("\nEnter the tray id: ");
                scanf("%d", &tray_id);
                push(tray_id);
                tray_id = 0;
                break;

            case 2:
                printf("\nTray %d removed", pop());
                break;

            case 3:
                printf("Last added tray: %d", peek());
                break;

            case 4:
                printf("Exiting the system...");
                return 0;

            default: printf("Invalid choice\n");
        }
    }
}
