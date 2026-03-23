/* In one state, single residents are subject to the following income tax:
 * Income               Amount of tax
 * Not over $750        1% of income
 * $750 - $2250         $7.50   plus 2% of amount over $750
 * $2250 - $3750        $37.50  plus 3% of amount over $2250
 * $3750 - $5250        $82.50  plus 4% of amount over $3750
 * $5250 - $7000        $142.50 plus 5% of amount over $5250
 * Over $7000           $230.00 plus 6% of amount over $7000
 *
 * Write a program that asks the user to enter the amount of taxable income, then displays the tax due.
 */


#include <stdio.h>

int main(void) {
    float income;

    printf("Enter taxable income: ");
    scanf("%f", &income);

    if (income <= 750.00) {
        printf("Tax due is $%.2f", income * .01f );
    }
    else if (income >= 750.00 && income <= 2250.00) {
        printf("Tax due is $%.2f", 7.50 + ((income - 750.00) * .02f));
    }
    else if (income >= 2250.00 && income <= 3750.00) {
        printf("Tax due is $%.2f", 37.50 + ((income - 2250.00) * .03f));
    }
    else if (income >= 3750.00 && income <= 5250.00) {
        printf("Tax due is $%.2f", 82.50 + ((income - 3750.00) * .04f));
    }
    else if (income >= 5250.00 && income <= 7000.00) {
        printf("Tax due is $%.2f", 142.50 + ((income - 5250.00) * .05f));
    }
    else if (income >= 7000.00) {
        printf("Tax due is $%.2f", 230.00 + ((income - 7000.00) * .06f));
    }

    return 0;
}

