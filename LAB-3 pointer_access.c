#include <stdio.h>

#define PEOPLE 5
#define LENGTH 20

int main() {
    char names[PEOPLE][LENGTH];
    char (*p)[LENGTH] = names;

    printf("Enter the name of five people\n");

    for(int i=0;i<PEOPLE;i++) {
        printf("Enter the name %d:",i+1);
        scanf("%19s",names[i]);
    }

    for(int i=0;i<PEOPLE;i++) {
        printf("\nName №%d: %s",i+1,*(p+i));
    }
    return 0;
}