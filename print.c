#include <stdio.h>
int main(){
printf("Hello\n");
int i, j, a, b;
float x, y, w, z;
i = 1098;
j = 20;
x = 43.6578f;
y = 556.78f;
a = 10;
b = 20;
w = 23.3456;
z = 445.766;
printf("i= %.2d, j= %d, x= %f y= %f\n", i,j,x,y);
printf("\a %d %5d %-5d %5.3d\n", a,a,a,a);
printf("Item\9 \tUnit\7 \tPrice\8 \n");
printf("Program to divide fractions\n");
int num1, denom1, num2, denom2, result, resultnum, resultdenom;
printf("Enter first fraction: ");
scanf("%d/%d", &num1, &denom1);
printf("Enter second fraction: ");
scanf("%d/%d", &num2, &denom2);
result = (num1/denom1) + (num2/denom2);
printf("Result: %d", result);




return 0;
}
