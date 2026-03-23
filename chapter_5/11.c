/* Write a program that asks the user fir a two-digit number, then prints the English word for the number.
*/

#include <stdio.h>

int main(void) {

    int dig1, dig2;

    printf("Enter a two digit number: ");
    scanf("%1d%1d", &dig1, &dig2);

    if (dig1 == 1) {
        switch (dig2) {
            case 1:
                printf("You entered the number eleven.");
                break;
            case 2:
                printf("You entered the number twelve.");
                break;
            case 3:
                printf("You entered the number thirteen.");
                break;
            case 4:
                printf("You entered the number fourteen.");
                break;
            case 5:
                printf("You entered the number fifteen.");
                break;
            case 6:
                printf("You entered the number sixteen.");
                break;
            case 7:
                printf("You entered the number seventeen.");
                break;
            case 8:
                printf("You entered the number eighteen.");
                break;
            case 9:
                printf("You entered the number nineteen.");
                break;
            default:
                printf("You done messed up");
        }
    return 0;
    }

    printf("You entered the number ");
    
    switch (dig1) {
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("fourty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
    }

    switch (dig2) {
        case 1:
            printf("-one.");
            break;
        case 2:
            printf("-two.");
            break;
        case 3:
            printf("-three.");
            break;
        case 4:
            printf("-four.");
            break;
        case 5:
            printf("-five.");
            break;
        case 6:
            printf("-six.");
            break;
        case 7:
            printf("-seven.");
            break;
        case 8:
            printf("-eight.");
            break;
        case 9:
            printf("-nine.");
            break;
        case 0:
            printf(".");
            break;
        default:
            printf("You goofed.");
    }
    return 0;
}