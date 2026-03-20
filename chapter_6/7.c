/* Write a program that finds the largest and smallest of four integers entered by the user.
 * Use as few if statements as possible
*/

#include <stdio.h>

int main(void) {

    int num1, num2, num3, num4, large, small;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    //large
    if (num1 >= num2 && num1 >= num3 && num1 >= num4) {
        large = num1;
    }
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4) {
        large = num2;
    }
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4) {
        large = num3;
    }
    else (large = num4);

    //small
    if (num1 <= num2 && num1 <= num3 && num1 <= num4) {
        small = num1;
    }
    else if (num2 <= num1 && num2 <= num3 && num2 <= num4) {
        small = num2;
    }
    else if (num3 <= num1 && num3 <= num2 && num3 <= num4) {
        small = num3;
    }
    else (small = num4);

    printf("Largest: %d\n", large);
    printf("Smallest: %d\n", small);

    return 0;
}