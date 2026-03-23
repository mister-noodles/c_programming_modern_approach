/* Write a program that asks the user for a 24-hour time, then displays the time in 12-hour format form*/

#include <stdio.h>

int main(void) {

    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours,&minutes);

    if (hours == 12) {
        printf("Equivalent 12-hour time: %d:%d PM", hours, minutes);
    }
    else if (hours > 12) {
        hours -= 12;
        printf("Equivalent 12-hour time: %d:%d PM", hours, minutes);
    }
    else
        printf("Equivalent 12-hour time: %d:%d AM", hours, minutes);

    return 0;
}