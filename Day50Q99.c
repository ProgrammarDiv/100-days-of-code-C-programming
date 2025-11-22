#include <stdio.h>
#include <string.h>

void convertDateFormat(char date[]) {
    char day[3];
    char monthNum[3];
    char year[5];
    char monthName[4];
    sscanf(date, "%2s/%2s/%4s", day, monthNum, year);

    if (strcmp(monthNum, "01") == 0) strcpy(monthName, "Jan");
    else if (strcmp(monthNum, "02") == 0) strcpy(monthName, "Feb");
    else if (strcmp(monthNum, "03") == 0) strcpy(monthName, "Mar");
    else if (strcmp(monthNum, "04") == 0) strcpy(monthName, "Apr");
    else if (strcmp(monthNum, "05") == 0) strcpy(monthName, "May");
    else if (strcmp(monthNum, "06") == 0) strcpy(monthName, "Jun");
    else if (strcmp(monthNum, "07") == 0) strcpy(monthName, "Jul");
    else if (strcmp(monthNum, "08") == 0) strcpy(monthName, "Aug");
    else if (strcmp(monthNum, "09") == 0) strcpy(monthName, "Sep");
    else if (strcmp(monthNum, "10") == 0) strcpy(monthName, "Oct");
    else if (strcmp(monthNum, "11") == 0) strcpy(monthName, "Nov");
    else if (strcmp(monthNum, "12") == 0) strcpy(monthName, "Dec");
    else strcpy(monthName, "???"); 
    printf("%s-%s-%s\n", day, monthName, year);
}
int main() {
    char date[20];
    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';
    convertDateFormat(date);
    return 0;
