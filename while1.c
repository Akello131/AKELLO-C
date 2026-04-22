#include<stdio.h>
int main(){
	int num, sum = 0;
	printf("Enter numbers, 0 to stop the program: ");
	scanf("%d", &num);
while(num != 0){
	sum += num;
	printf("Enter number: ");
	scanf("%d", &num);
}
	
	printf("Sum: %d", sum);




return 0;
}
