#include <stdio.h>
int main(){
	int i, num, factor =1;
	printf("Enter the number: ");
	scanf("%d", &num);
	i=num;
	while(i>=1){
	factor= factor * i;
	i=i-1;
	}
	printf("The factorial is: %d", factor);
	return 0;
}
