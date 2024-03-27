#include <stdio.h>
#include <stdbool.h>


bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}


int daysInMonth(int month, int year) {
    switch (month) {
        case 1:
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
            return 31;
        case 4: 
        case 6:
        case 9: 
        case 11: 
            return 30;
        case 2: 
            if (isLeapYear(year))
                return 29;
            else
                return 28;
        default:
            return -1;
    }
}

int main() {
    int year, month;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    printf("Enter a month (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 1; // Exit program with error
    }

    printf("Number of days in the given month: %d\n", daysInMonth(month, year));

    return 0;
}

