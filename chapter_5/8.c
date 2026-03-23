/* The following table shows the daily flights from once city to another:
 * Departure time       Arrival time
 * 8:00AM               10:16AM
 * 9:43AM               11:52AM
 * 11:19AM              1:31PM
 * 12:47PM              3:00PM
 * 2:00PM               4:08PM
 * 3:45PM               5:55PM
 * 7:00PM               9:20PM
 * 9:45PM               11:58PM
 *
 * Write a program that asks the user to enter a time (expressed in hours and minutes, using the 24-hour clock).
 * The program then displays the departure and arrival times for the flight whose departure time is closest to
 * that entered by the user.
 */

#include <stdio.h>

int main(void) {

    int hours, minutes, conv_usr_input ;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    conv_usr_input = hours * 60 + minutes;

    //dep1 = 8 * 60;
    //"Closest departure time is 8:00 a.m., arriving at 10:16 a.m."
    //dep2 = 9 * 60 + 43;
    //"Closest departure time is 9:43 a.m., arriving at 11:52 a.m."
    //dep3 = 11 * 60 + 19;
    //"Closest departure time is 11:19 a.m., arriving at 1:31 p.m."
    //dep4 = 12 * 60 + 47;
    //"Closest departure time is 12:47 p.m., arriving at 3:00 p.m."
    //dep5 = 14 * 60;
    //"Closest departure time is 2:00 p.m., arriving at 4:08 p.m."
    //dep6 = 15 * 60 + 45;
    //"Closest departure time is 3:45 p.m., arriving at 5:55 p.m."
    //dep7 = 19 * 60 ;
    //"Closest departure time is 7:00 p.m., arriving at 9:20 p.m."
    //dep8 = 21 * 60 + 45;
    //"Closest departure time is 9:45 p.m., arriving at 11:58 p.m."


    if (conv_usr_input <= 540) {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    }
    else if (conv_usr_input <= 615) {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    }
    else if (conv_usr_input <= 720) {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    }
    else if (conv_usr_input <= 795) {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    }
    else if (conv_usr_input <= 900) {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    }
    else if (conv_usr_input <= 1020) {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    }
    else if (conv_usr_input <= 1230) {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    }
    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");

    return 0;
}