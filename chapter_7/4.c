/* Write a program that translates an alphabetic phone number into numeric form. If the original phone number contains
 * nonalphabetic characters (digits or punctuation, for example), leave them unchanged. You may assume that any letters
 * entered by the user are upper case.
*/

#include <stdio.h>

int main(void) {

    char ch;
    int num, len = 0;

    printf("Enter phone number: ");
    while ((ch = getchar()) != '\n') {
        if (ch == 'A' || ch == 'B' || ch == 'C') {
            printf("2");
        }else if (ch == 'D' || ch == 'E' || ch == 'F') {
            printf("3");
        }else if (ch == 'G' || ch == 'H' || ch == 'I') {
            printf("4");
        }else if (ch == 'J' || ch == 'K' || ch == 'L') {
            printf("5");
        }else if (ch == 'M' || ch == 'N' || ch == 'O') {
            printf("6");
        }else if (ch == 'P' || ch == 'Q' || ch == 'R') {
            printf("7");
        }else if (ch == 'S' || ch == 'T' || ch == 'U') {
            printf("8");
        }else if (ch == 'V' || ch == 'W' || ch == 'X') {
            printf("9");
        }
        else {
            putchar(ch);
        }
    }

    printf("\n");
    return 0;
}