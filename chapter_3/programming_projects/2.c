/* Write a program that formats product information entered by the user. The item number and date should be left justified.
*/

#include <stdio.h>

int main(void) {
    int item_num, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit_price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase_date: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\t\tPrice\t\tDate\n");
    printf("%-8d\t$%8.2f\t%d/%d/%d", item_num, unit_price, day, month, year);
}