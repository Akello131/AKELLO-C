#include <stdio.h>
int main(){
	int i=1, num = 23, number;

	while(i<100){
		printf("Guess a number: ");
	scanf("%d", &number);
		if(number > num){
			printf("Your slightly above the right number, guess again.\n");
		}
		else if(number < num){
			printf("Your slightly below the right number, guess again.\n");
		}
		else{
			printf("Congratulations! you have guessed the right number\n");
		}
		i=i+1;
	}
	
	return 0;
}
