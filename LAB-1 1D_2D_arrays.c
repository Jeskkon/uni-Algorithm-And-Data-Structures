#include <stdio.h>

int main() {
    //task1
    int a[5];
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    int max = a[0];
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        if (a[i]>max) {
            max = a[i];
        }
        sum += a[i];
    }

    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        printf("%d\n", a[i]);
    }
    printf("%d\n", sum);
    printf("%d\n", max);

    //task2
    int matrix[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int row_sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            row_sum += matrix[i][j];
        }
        printf("%d\n", row_sum);
        row_sum = 0;
    }
}