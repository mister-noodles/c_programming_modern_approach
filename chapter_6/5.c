/* Programming project 1 in Chapter 4 asked you to write a program that displays a two-digit number with its digits reversed.
 * Generalize the program so that the number can have one, two, three, or more digits.
*/


#include <stdio.h>
 
int main(void) {
	int num, reversed_num = 0, remainder;

	printf("Enter an integer: ");
	scanf("%d", &num);

	//loop until og number becomes 0
	while (num != 0) {
		
		remainder = num % 10;

		reversed_num = reversed_num * 10 + remainder;

		num /= 10;

	}

	printf("Reversed number is: %d\n", reversed_num);

	return 0;
}
