/* In the SCRABBLE Crossword Game, Players form words using small tiles, each containing a letter and a face value.
 * The face value varies from one letter to another, based on the letter's rarity. (Here are the face values:
 * 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.) Write a program that computes the value of a word
 * by summing the values of its letters. Your program should allow any mixture of lower-case and upper-case letters
 * in the word. Hint: Use the toupper library function.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {

    char ch;
    int value = 0;

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'S' ||
        ch == 'T' || ch == 'U') {
            value += 1;
        }else if (ch == 'D' || ch == 'G') {
            value += 2;
        }else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P') {
            value += 3;
        }else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y') {
            value += 4;
        }else if (ch == 'K') {
            value += 5;
        }else if (ch == 'J' || ch == 'X') {
            value += 8;
        }else if (ch == 'Q' || ch == 'Z') {
            value += 10;
        }
        else {
            printf("you goofed.");
        }
    }

    printf("Scrabble value: %d\n", value);
    return 0;
}