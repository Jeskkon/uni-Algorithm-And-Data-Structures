#include <stdio.h>

int main() {
    int arr[5];
    int *p = &arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the marks of 5 students: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &*(p+i));
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