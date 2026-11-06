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

    struct Student *students = malloc(size * sizeof *students);
    if (!students) return 1;

    for (int i=0;i<size;i++) {
        printf("\nEnter student %d info:", i+1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].grade);
    }
    for (int i=0;i<size;i++) {
        printf("\nStudent %d info: %s %d %.2f", i+1, students[i].name, students[i].age, students[i].grade);
    }
    free(students);
    return 0;
}
