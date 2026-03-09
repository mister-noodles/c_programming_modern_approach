/* write a program that breaks down the ISBN entered by a user */

#include <stdio.h>

int main(void) {
    int gs1_prefix, group_identifier, pub_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &pub_code, &item_num, &check_digit);
    printf("GS1 Prefix: %d\n", gs1_prefix);
    printf("Group Identifier: %d\n", group_identifier);
    printf("Public Code: %d\n", pub_code);
    printf("Item Number: %d\n", item_num);
    printf("Check Digit: %d\n", check_digit);

}