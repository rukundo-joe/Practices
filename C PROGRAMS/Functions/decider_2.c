#include <stdio.h>

int main() {
    int currentHour, currentMinute, currentDay;

    printf("Enter the current hour (0-23): ");
    scanf("%d", &currentHour);

    printf("Enter the current minute (0-59): ");
    scanf("%d", &currentMinute);

    printf("Enter the current day of the week (0-6, Sunday=0): ");
    scanf("%d", &currentDay);

    int isShowerTime = (currentHour == 7 && currentMinute >= 30) || (currentHour == 8) || (currentHour == 9 && currentMinute <= 30);
    int isShampooDay = (currentDay == 1 || currentDay == 3 || currentDay == 5);

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
