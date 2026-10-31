#include <stdio.h>

struct Student {
    char name[20];
    int age;
    float grade;
};

void inputStudent(struct Student student[], int size){
    for (int i = 0; i < size; i++) {
        printf("\nEnter student %d info: ", i+1);
        scanf("%19s %d %f", student[i].name, &student[i].age, &student[i].grade);
    }
}

void outputStudent(struct Student student[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nStudent %d info: %s, %d, %.2f",i+1, student[i].name, student[i].age, student[i].grade);
    }
}

int main() {
    struct Student student[5];
    int size = sizeof(student)/sizeof(struct Student);

    inputStudent(student, size);
    outputStudent(student, size);
}