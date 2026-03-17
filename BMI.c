#include <stdio.h>
int main(){
 float height, weight, BMI;
 printf("Enter your height(metres): ");
 scanf("%f", &height); 
 printf("Height: %.2f meters\n", height);
 printf("Enter your weight(kg): ");
 scanf("%f", &weight );
 printf("Weight %.2f kg\n", weight);

 BMI= weight/ (height*height);
 printf("Your BMI is: %1f\n", BMI);
 
 if (BMI< 18.5){
 	printf("Underweight\n");
 }
 else if (BMI < 24.9){
 	printf("Normal Weight\n");
 }
 else if (BMI <29.9){
 	printf("Overweight");
 }
 else{
 	printf("Obese");
 }
 int age;
 printf("Enter Your Age: ");
 scanf("%d", &age);
 printf("Age is: %d years old\n", age);
 if (age > 18){
 	printf("You're an adult now");
 }
 else {
 	printf("Grow up first");
 }
  return 0;


}
