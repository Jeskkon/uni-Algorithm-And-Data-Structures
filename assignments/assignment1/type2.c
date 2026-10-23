#include <stdio.h>

int main() {

    int Tdays[7];
    int size = sizeof(Tdays)/sizeof(Tdays[0]);
    int *p = &Tdays[0];

    printf("Enter temperature for each day of the week: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &*(p+i));
    }

    printf("Original temperatures: ");
    for(int i = 0; i < size; i++){
        printf("%d ", *(p+i));
    }

    float average;
    for(int i = 0; i < size; i++){
        average += *(p+i);
    }
    average = average/size;
    printf("\nAverage temperature: %.2f", average);

    int high = Tdays[0];
    int low = Tdays[0];
    for(int i = 0; i < size; i++){
        if (*(p+i)>high)
            high = *(p+i);
        if (*(p+i)<low){
            low = *(p+i);
        }
    }
    printf("\nHighest temperature: %d", high);
    printf("\nLowest temperature: %d", low);

    printf("\nUpdated temperature: ");
    for(int i = 0; i < size; i++){
        printf("%d ", *(p+i)+1);
    }

    return 0;
}