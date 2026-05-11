#include <stdio.h>
int main () {
int i, num, product;
printf("Enter number: ");
scanf("%d", &num);
for(i=1; i<=12; i++){
	product = i*num;
	printf("\t%d * %d = %d\n", i, num, product);
}


return 0;	
}
