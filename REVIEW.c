#include <stdio.h>
int main(){
	const float D=3800.0;  //DOLLAR =3800
	float UgShs, Dollars;
	printf("Enter Currency in UgShs: ");
	scanf("%f", &UgShs);
	
	Dollars = UgShs / D;
	printf("Dollars: %.2f", Dollars);
	
	
	
	
	
	return 0;
}
