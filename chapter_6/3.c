/* Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms: */

#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n1, &n2);

    if (n2 == 0) {
        printf("Error: denominator cannot be zero.\n");
        return 1;
    }

    while(n1!=n2)
    {
        if (n1 > n2) {
            n1 -= n2;
        }
        else
            n2 -= n1;
    }


    printf("In lowest terms: %d/%d", n1, n2);

    return 0;
}
