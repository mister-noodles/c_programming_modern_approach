/* make changes to the broker.c program */
/* Calculates a broker's commission */

#include <stdio.h>

int main(void) {

    float commission, value, price, r_commission, shares;

    printf("Enter the number of shares: ");
    scanf("%f", &shares);
    printf("Enter the price of the shares: $");
    scanf("%f", &price);

    value = shares * price;


    if (shares < 2000.00f)
        r_commission = 33.00f + .03f * shares;
    else
        r_commission = 33.00f + .02f * shares;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);
    printf("Rival Commission: $%.2f\n", r_commission);

    return 0;
}