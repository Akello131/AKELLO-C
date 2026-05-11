#include <stdio.h>
int main(){
int num, product, i=1;
printf("Enter a number: ");
scanf("%d", &num);
while(i<=10){
	product = num*i;
	printf("\n%d", product);
	i=i+1;	
}
	
	return 0;
}
