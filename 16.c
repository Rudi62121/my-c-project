#include <stdio.h>

#define DAYS_PER_YEAR 365
#define HOURS_PER_DAY 24
#define SECS_PER_HOUR 3600

int main() {
    int years = 18;
    int days = years * DAYS_PER_YEAR;
    long hours = (long)days * HOURS_PER_DAY;
    long seconds = hours * SECS_PER_HOUR;

    printf("Тики: %ld | Часы: %ld | Дни: %d | Годы: %d\n", seconds, hours, days, years);

    return 0;
}
