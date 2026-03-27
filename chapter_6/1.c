/* Write a program that finds the largest in a series of numbers entered by the user. The program must prompt the user
 * to enter numbers one by one. When the user enters 0 or a negative number, the program must display the largest
 * non-negative number entered.
*/

#include <stdio.h>

int main(void) {

    float num = 1;
    float biggest = 1;

    while (num > 0 || num != 0) {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num >= biggest) {
            biggest = num;
        };
    }

    printf("The largest number entered was %.2f", biggest);

    return 0;
}