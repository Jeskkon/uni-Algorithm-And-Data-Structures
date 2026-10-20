// Write a C program to manage the marks of five students using an array and pointers.
// Your program must perform the following tasks:
// 1. Declare an integer array to store the marks of five students.
// 2. Read the marks from the user and store them in the array.
// 3. Use a pointer to access the array elements and display each student's mark.
// 4. Calculate and display the total and average marks using pointer operations.
// 5. Find and display the highest mark using a pointer.
// 6. Increase each student's mark by 2 points using a pointer.
// 7. Display the updated marks.

#include <stdio.h>

int main() {
    int arr[5];
    int *p = &arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the marks of 5 students: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original marks: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(p+i));
    }

    int total = 0;
    for (int i = 0; i < size; i++) {
        total += *(p+i);
    }
    printf("\nTotal marks: %d ", total);

    printf("\nAverage marks: %.2f", (float)total / size);

    printf("\nUpdated marks: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(p+i)+2);
    }
}
