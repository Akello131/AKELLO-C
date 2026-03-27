#include <stdio.h>
int main(){
	int IN, UP, mm, dd, yyyy;
	//IN = Item Number 
	//UP = Unit Price
	printf("Enter Item number: ");
	scanf("%d", &IN);
	
	printf("Enter Unit Price(Shs): " );
	scanf("%d", &UP);
	
	printf("Enter purchase Date(mm/dd/yyyy): ");
	scanf("%d/%d/%d", &dd, &mm, &yyyy);
	
	printf("Item \tUnit \tPurchase\n \tPrice \tDate\n %-d \t$ %d \t%-d/%-d/%-d", IN, UP, mm, dd, yyyy);
		
		return 0;
}
