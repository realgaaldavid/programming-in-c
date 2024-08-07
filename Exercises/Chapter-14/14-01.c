// the enumerated type

#include <stdio.h>

int main(void) {

    enum month {january = 1, february, march, april, may, june, july, august, september, october, november, december};
    enum month aMonth;
    int days;

    printf("enter the number of the month: ");
    scanf("%i", &aMonth);

    switch (aMonth) {
        case january:
        case march:
        case may:
        case july:
        case august:
        case october:
        case december:
            days = 31;
            break;
        case april:
        case june:
        case september:
        case november:
            days = 30;
            break;
        case february:
            days = 28;
            break;
        default:
            printf("wrong number\n");
            days = 0;
            break;
    }

    if (days != 0) printf("number of days: %i\n", days);
    if (aMonth == february) printf("...or 29, if it's a leap year\n");

    return 0;

}