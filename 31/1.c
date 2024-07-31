#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number of integers must be positive.\n");
        return 1; // Exit with error code
    }

    int arr[n]; 
    int sum = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    double average = (double)sum / n;
    printf("The average of the entered integers is: %.2f\n", average);

    return 0;
}
