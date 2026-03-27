/* Write a program that prompts the user to enter a number n, then prints all even squares
 * between 1 and n.
*/

#include <stdio.h>

int main(void){

	int i = 1, n, square = 1;

	printf("Please enter a number: ");
	scanf("%d", &n);

	while( square < n ) {
		if (i % 2 == 0) {
			square = i * i;
			printf("%d\n", square);
			i++;
			}

		else {
			i++;
		}
	}

	return 0;
}

	
