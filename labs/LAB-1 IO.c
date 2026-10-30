#include <stdio.h>

void task1() {
	int a,b,c, sum;
	float avg;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	sum = a+b+c;
	avg = sum/3;

	printf("summ is: %d \n", sum);
	printf("avg is: %.2f \n", avg);
}

void task2() {
	char name[32];
	int age;

	printf("Enter your name and age: ");
	scanf("%s %d", &name, &age);

	printf("Hello %s, you are %d years old", name, age);
}

void task3() {
	int a,b, sum;

	printf("Enter Two Numbers: ");
	scanf("%d %d", &a, &b );

	sum = a+b;

	printf("Summ is %d", sum);
}

int main(){
	task1();
	task2();
	task3();
    return 0;
}