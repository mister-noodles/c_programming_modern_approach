/* Programming project 9 in Chapter 5 asked you to write a program that determines which of two dates comes earlier on the calendar. Generalize the program 
 * so that the user may enter any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered. */

#include <stdio.h>

int main(void) {

    int d, m, y, ed = 9999, em = 9999, ey = 9999;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    while (m != 0 && d != 0 && y != 0) {
    	if (y < ey) {
		ey = y;
		em = m;
		ed = d;
	}else if ( m < em) {
		ey = y;
		em = m;
		ed = d;
	}else if ( d < ed) {
		ey = y;
		em = m;
		ed = d;
	}else {
		printf("you goofed");
	}



	printf("Enter a data (mm/dd/yy): ");
	scanf("%d/%d/%d", &m, &d, &y);
    }

    printf("\n%d/%d/%d is the earliest date\n", em, ed, ey);

    return 0;
}
