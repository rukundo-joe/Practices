#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Values in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
