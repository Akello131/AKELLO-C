#include <stdio.h>
int main(){
	const float Freezing_Point = 32.0;
	const float Scaling_Factor = (5.0/9.0);
	float Celsius, Fahrenheit;
	printf("Enter Temperature in Fahrenheit ");
	scanf("%f" , &Fahrenheit);
	Celsius = (Fahrenheit - Freezing_Point) * Scaling_Factor;
	printf("Temperature in Celsius %.1fdegrees\n" , Celsius);
	return 0;
}
