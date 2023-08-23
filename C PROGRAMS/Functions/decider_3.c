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

    printf("It's %s\n", isShowerTime ? "shower time!" : "not shower time yet.");

    printf("%s\n", isShampooDay ? "Don't forget to shampoo your hair." : "No need to shampoo today.");

    return 0;
}
