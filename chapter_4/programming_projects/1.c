/* Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed.
 * Read the number using %d, then break it into two digits.
*/

#include <stdio.h>

int main(void) {

    int twodigit_num;
    int i, j;

    printf("Enter a two-digit number: ");
    scanf("%d", &twodigit_num);

    //first figure out last digit of entered number
    j = twodigit_num % 10;

    //next figure out first digit of entered number
    i = twodigit_num / 10;

    //reverse and print
    printf("The reversal is : %d%d", j, i);


    return 0;
}