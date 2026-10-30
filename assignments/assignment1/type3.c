#include <stdio.h>

int main() {

    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    int *p = &arr[0];

    printf("\nEnter the stock quiantities of 5 products: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &*(p+i));
    }

    printf("\nOriginal stock quiantities: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", *(p+i));
    }

    int total;
    for(int i = 0; i < size; i++) {
        total += *(p+i);
    }
    printf("\nTotal items in stock: %d", total);

    int high;
    for(int i = 0; i < size; i++) {
        if(*(p+i)>high) {
            high = *(p+i);
        }
    }
    printf("\nHighest item found in stock: %d", high);

    printf("\nUpdated stock quiantities: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", *(p+i)-2);
    }

    return 0;
}
