/* Programming project in Chapter 2 asked you to write a program that calculates the reamining balance on a loan after the first, second, and third
 * monthly payments. Modify the program so that it also asks the user to enter the number of payments and then displays the balance remaining
 * after each of these payments.
*/

#include <stdio.h>

int main(void) {
    float loan;
    float interest;
    float monthly;
    int number_of_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly: ");
    scanf("%f", &monthly);

    printf("Enter the number of payments: ");
    scanf("%d", &number_of_payments);

    for (int i = 0; i < number_of_payments; i++) {
    
	loan = (loan - monthly) + (loan * ((interest / 100.00) / 12));
    	printf("\nBalance remaining after payment %d: $%.2f\n", i, loan); 
    }

    return 0;
}
