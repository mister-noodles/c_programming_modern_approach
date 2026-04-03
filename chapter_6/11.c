/* Write a program that approximates e by computing the value of 1 + 1/1! + 1/2! + 1/3!+ ... + 1/n! when n is an integer 
 * entered by the the user.*/

//I copied this from claude, I wont gain much by doing it myself.


#include <stdio.h>

int main(void)
{
    int i, n;
    double e = 1.0, factorial = 1.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
        e += 1.0 / factorial;
    }

    printf("Approximation of e: %f\n", e);

    return 0;
}


