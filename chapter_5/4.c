/* Simplified version of the Beaufort scale, which is used to estimate wind force
 * Speed(knots)     Description
 * Less than 1      Calm
 * 1-3              Light air
 * 4-27             Breeze
 * 28-47            Gale
 * 48-63            Storm
 * Above 63         Hurricane
 *
 * Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding description.*/

#include <stdio.h>

int main(void) {

    float speed;

    printf("Please enter your speed: ");
    scanf("%f", &speed);

    if (speed < 1)
        printf("You entered: %.1f, this is Calm.", speed);
    else if (speed >= 1 && speed <= 3)
        printf("You entered: %.1f, this is Light Air.", speed);
    else if (speed >= 4 && speed <= 27)
        printf("You entered: %.1f, this is Breeze.", speed);
    else if (speed >= 28 && speed <= 47)
        printf("You entered: %.1f, this is Gale.", speed);
    else if (speed >= 48 && speed <= 63)
        printf("You entered: %.1f, this is Storm.", speed);
    else
        printf("You entered: %.1f, this is Hurricane.", speed);

    return 0;
}