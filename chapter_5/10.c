/*
 * Using the switch statement, write a program that converts a numerical grade into a letter grade:
*/

#include <stdio.h>

int main(void) {

    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100 ) {
        printf("Grade is too high.\n");
        return 0;
    }
    else if (grade < 0 ) {
        printf("Grade is too low.\n");
        return 0;
    }
    else if (grade == 100) {
        printf("Letter grade: A");
    }

   int tens = grade / 10;

    switch (tens) {
        case 9:
            printf("Letter grade: A");
            break;
        case 8:
            printf("Letter grade: B");
            break;
        case 7:
            printf("Letter grade: C");
            break;
        case 6:
            printf("Letter grade: D");
            break;
        default:
            printf("Letter grade: F");
    }

    return 0;
}

