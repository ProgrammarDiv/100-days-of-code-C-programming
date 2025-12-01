//Create an enum for months and print how many days each month has.

#include <stdio.h>

enum months { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
              JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main() {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("January: %d days\n", days[JANUARY]);
    printf("February: %d days\n", days[FEBRUARY]);
    printf("March: %d days\n", days[MARCH]);
    printf("April: %d days\n", days[APRIL]);
    printf("May: %d days\n", days[MAY]);
    printf("June: %d days\n", days[JUNE]);
    printf("July: %d days\n", days[JULY]);
    printf("August: %d days\n", days[AUGUST]);
    printf("September: %d days\n", days[SEPTEMBER]);
    printf("October: %d days\n", days[OCTOBER]);
    printf("November: %d days\n", days[NOVEMBER]);
    printf("December: %d days\n", days[DECEMBER]);

    return 0;
}
