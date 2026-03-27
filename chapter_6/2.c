/* Write a program that asks the user to enter two integers, then calculates and displays their greatest common
 * divisor (GCD)
*/
#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    while(n1!=n2)
    {
        if (n1 > n2) {
            n1 -= n2;
        }
        else
            n2 -= n1;
    }
    printf("Greatest common divisor: %d",n1);

    return 0;
}