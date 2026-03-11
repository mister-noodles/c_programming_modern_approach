/* Write a program that asks the user to enter a three-digit number, then prints the number with its digits reversed.
* Read the number using %d, then break it into two digits.
*/

#include <stdio.h>

int main(void) {

    int threedigit_num;
    int i, j, k;

    printf("Enter a three-digit number: ");
    scanf("%d", &threedigit_num);

    //first figure out last digit of entered number:
    j = threedigit_num % 10;

    //next figure out first digit of entered number:
    i = threedigit_num / 100;

    //next figure out the second digit of entered number:

    k = (threedigit_num / 10) % 10 ;

    //reverse and print
    printf("The reversal is : %d%d%d", j, k, i);


    return 0;
}