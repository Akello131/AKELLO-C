#include <stdio.h>
int main(){
	const float D = 3800;      //D stands for 1Dollar thus 1Dollar is 3800Ugshs
	const float P = 4700;      //P stands for 1Pound thus 1Pound is 4700Ugshs
	const float E = 5200;      //P stands for 1Pound thus 1Euro is 4200Ugshs
	const float K = 33;        //K stands for 1Kenyan shilling thus 1Ksh is 33Ugshs
	float UgShs, Dollars, KShs, Pounds, Euros;
	printf("Enter the Currency in UgShs: ");
	scanf("%f", &UgShs);
	
	Dollars = UgShs / D;
	printf("Dollars=  %.2fDollars\n" , Dollars);
	
	Pounds = UgShs / P;
	printf("Pounds= %.2fPounds\n" , Pounds);
	
	Euros = UgShs / E;
	printf("Euros= %.2fEuros\n" , Euros);
	
	KShs = UgShs / K;
	printf("KShs= %.2fKShillings" , KShs);
	return 0;
}
