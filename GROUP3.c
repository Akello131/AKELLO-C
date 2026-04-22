#include<stdio.h>
int main(){
	int i, sum = 0;
	for(i = 1; i<= 5; i++){
	printf("\t%d", i);
	sum += i;
}
printf("\nSum is: %d\n", sum);

int age;
char name [50];
printf("\nWhat is your name? ");
scanf("%s", name);
printf("Enter your age ");
scanf("%d", &age);
printf("%s is %d years old!\n", name, age);
 printf("\nADDITION CALCULATOR\n");
int num1, num2, Sum;
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter the Second number: ");
scanf("%d", &num2);
Sum = num1 + num2;
printf("The sum of the 2 numbers is: %d\n", Sum);

float length, width, area;
printf("\nAREA OF RECTANGLE\n");
printf("Enter the Lenth: ");
scanf("%f", &length);
printf("Enter the Width: ");
scanf("%f", &width);
area = length * width;
printf("Area is: %.2f sq.units", area);

	return 0;
}
