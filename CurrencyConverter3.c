#include <stdio.h>
int main(){
//1Dollar is 3800Ugshs  1Pound is 4700Ugshs  1Euro is 4200Ugshs  1Ksh is 33Ugshs
float UgShs, Dollars, KShs, Pounds, Euros, Result;  //Result is value if the currency after being converted	
char Currency;
printf("Enter Currency in Uganda Shillings: ");
scanf("%f", &UgShs);
printf("Enter D for Dollars or K for KShs or P for Pounds or E for Euros: ");
scanf(" %c", &Currency);

if(Currency == 'D'){
Result = UgShs / 3800;
printf("Amount in Dollars is: %.2f", Result);
}
else if(Currency == 'K'){
	Result = UgShs / 33;
	printf("Amount in KShs is: %.2f", Result);
}
else if(Currency == 'P'){
	Result = UgShs / 4700;
	printf("Amount in Pounds is: %.2f", Result);
}
else if(Currency == 'E'){
	Result = UgShs / 4200;
	printf("Amount in Euros is: %.2f", Result);
}
else{
	printf("Sorry we cannot convert other currencies at the moment.");
}
	
		return 0;
}
