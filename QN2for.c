#include <stdio.h>
int main (){
	int num, i, factor =1;
	printf("Enter the number: ");
	scanf("%d", &num);
	for(i=num; i>=1; i=i-1){
	factor = factor * i;
	}
	printf("The factorial is: %d", factor);	
	return 0;
}
