/* Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar
*/

#include <stdio.h>

int main(void) {

    int dd1, mm1, yy1, dd2, mm2, yy2, y_comp, m_comp, d_comp;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);

    if (yy2 < yy1) {
        printf("%d/%d/%d is earlier than %d/%d/%d",mm2, dd2, yy2, mm1, dd1, yy1);
    }
    else if (yy2 <= yy1 && mm2 < mm1) {
        printf("%d/%d/%d is earlier than %d/%d/%d",mm2, dd2, yy2, mm1, dd1, yy1);
    }
    else if (yy2 <= yy1 && mm2 <= mm1 && dd2 < dd1) {
        printf("%d/%d/%d is earlier than %d/%d/%d",mm2, dd2, yy2, mm1, dd1, yy1);
    }
    else if (yy2 == yy1 && mm2 == mm1 && dd2 == dd1) {
        printf("%d/%d/%d is the same date as %d/%d/%d",mm2, dd2, yy2, mm1, dd1, yy1);
    }
    else
        printf("%d/%d/%d is later than date %d/%d/%d",mm2, dd2, yy2, mm1, dd1, yy1);

    return 0;
}