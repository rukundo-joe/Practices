#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time
    time_t currentTime = time(NULL);
    struct tm *localTime = localtime(&currentTime);

    // Get the current day of the week (Sunday = 0, Monday = 1, ..., Saturday = 6)
    int currentDay = localTime->tm_wday;

    // Get the current hour and minute
    int currentHour = localTime->tm_hour;
    int currentMinute = localTime->tm_min;

    // Check if it's between 7:30 A.M. and 9:30 A.M.
    int isShowerTime = (currentHour == 7 && currentMinute >= 30) || (currentHour == 8) || (currentHour == 9 && currentMinute <= 30);

    // Check if it's Monday, Wednesday, or Friday
    int isShampooDay = (currentDay == 1 || currentDay == 3 || currentDay == 5);

    // Decide whether to take a shower and shampoo
    if (isShowerTime) {
        printf("It's shower time!\n");
        if (isShampooDay) {
            printf("Don't forget to shampoo your hair.\n");
        } else {
            printf("No need to shampoo today.\n");
        }
    } else {
        printf("It's not shower time yet.\n");
    }

    return 0;
}
