#include <stdio.h>
int main(){
	float a, b, c;  // a= first number b= second number c= result
	char o;    // o= operator sign
	printf("Enter first number: ");
	scanf("%f", &a);
	
	printf("Enter second number: ");
	scanf("%f", &b);
	
	printf("Select an operation +, -, / or *:  ");
	scanf(" %c", &o); //space before %c tells scanf to ignore spaces, tabs, and newlines until it finds a real character

	if(o == '+'){
     c = a + b;
	 printf("The Sum is; %.2f", c);
	}
	else if(o == '-'){
     c = a - b;
     printf("The difference is: %.2f", c);
	}
	else if(o == '/'){
		if(b == 0){
			printf("Math Error!");  //a number divided by 0 is impossible
		}
		else if(b > 0);
	 c = a / b;
	 printf("The Quotient is; %.2f", c);
	}
	else if(o == '*'){
    c = a * b;
    printf("The Product is; %.2f", c);
	}
	else{
		printf("Invalid operator ");
	}
		
		return 0;
}
