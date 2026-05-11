#include<stdio.h>
int main(){
	int i=1, num;
	long long factorial=1;
	
	printf("Enter the number whose factorial you want: ");
	scanf("%d", &num);
	
	for(i; i<=num; i++){
		factorial = i*factorial;
	}

//	while(i<=num){
//	factorial = i*factorial;
//	i++;
//}
	
	printf("The factorial is: %lld", factorial);
	return 0;
}

