/* Write a program that reads an integer entered by the user and displays it in octal:
 * The output should be displayed using five digits, even if fewer digits are sufficient.
*/

#include <stdio.h>

int main(void) {

    int num;
    int oct1, oct2, oct3, oct4, oct5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    oct5 = num % 8;
    oct4 = (num / 8) % 8;
    oct3 = ((num / 8) / 8) % 8;
    oct2 = (((num / 8) / 8) / 8) % 8;
    oct1 = ((((num / 8) / 8) / 8) / 8) % 8;

    //printf("num1 is %d\nnum2 is %d\nnum3 is %d", oct5,oct4,oct3,oct2,oct1);
    printf("In octal, your number is: %d%d%d%d%d\n", oct1, oct2, oct3, oct4, oct5);

    return 0;
}