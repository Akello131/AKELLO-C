#include <stdio.h>  
int main() {        
    int n, a, sum = 0;  // declare variables
    // n = term number, a = value of term, sum = total sum
    // sum = 0 meaning starting from 0
    printf("n\t a_n\n");   // print table headers for n and a_n
    printf("----------------\n");

    //loop through n = 1 to 15
    for(n = 1; n <= 15; n++) {
        a = 4*n - 3;   // calculate the nth term using formula
        
        printf("%d\t %d\n", n, a);  // print term number and value in table format
        sum += a;      // add this term to the running sum
    }

    // after loop ends, print the total sum
    printf("----------------\n");
    printf("Sum of first 15 terms = %d\n", sum);

    return 0;          
}




	
	
	

