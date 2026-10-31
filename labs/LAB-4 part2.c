
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int age;
    float grade;
};

int main() {
    printf("\nEnter the number of students: ");
    int size=0;
    scanf("%d", &size);
    struct Student *Students = (struct Student *) malloc(size*sizeof(struct Student));
    if (Students == NULL) {
        printf("\nMemory allocation failed");
        return 0;
    }
    for (int i=0;i<size;i++) {
        printf("\nEnter student %d info:", i+1);
        scanf("%s %d %f", &Students[i].name, &Students[i].age, &Students[i].grade);
    }
    for (int i=0;i<size;i++) {
        printf("\nStudent %d info: %s %d %.2f", i+1, Students[i].name, Students[i].age, Students[i].grade);
    }
    free(Students);

}
