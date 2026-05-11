#include <stdio.h>
int main () {
int i, num, product;
printf("Enter number: ");
scanf("%d", &num);
for(i = 1; i<= 10; i++){
product = num*i;
printf("\n%d * %d = %d", num, i, product);	
}

return 0;	
}
