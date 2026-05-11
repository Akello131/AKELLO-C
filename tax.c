#include<stdio.h>
int main(){
	float income, tax;
	printf("Enter the amount of taxable income($): ");
	scanf("%f", &income);
	if(income < 750){
		tax = 0.01*income;
		printf("The tax is: %.2f", tax);
	}
	else if(income <= 750){
		tax =  7.50 + (0.02*(income - 750));
		printf("The tax due is: %.2f", tax);
	}
	else if(income <= 3750){
		tax =  37.50 + (0.03*(income - 2250);
		printf("The tax due is: %.2f", tax);
}
    else if(income <= 5250){
		tax =  82.50 + (0.04*(income - 3750));
		printf("The tax due  is: %.2f", tax);
	}
	else if(income <= 7000){
		tax =  142.50 + (0.05*(income - 5250));
		printf("The tax due is: %.2f", tax);
	}
	else {
		tax =  230 + (0.06*(income - 7000));
		printf("The tax due is: %.2f", tax);
	}
	 
	
	return 0;
}
