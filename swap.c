#include <stdio.h>

int main() {
    int arr[5][5] = {
        {10, 29, 30, 15, 50},
        {168, 70, 90, 190, 80},
        {110, 256, 130, 140, 245},
        {347, 170, 180, 111, 200},
        {210, 195, 87, 24, 18}
    };
    int n = sizeof(arr) / sizeof(arr[0]);
    int odd_count = 0;
    int sum = 0;
    int min = arr[0][0];
    int row_sum = 0;

    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 != 0) {
                odd_count++;
            }
            sum += arr[i][j];
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    for (int j = 0; j < n; j++) {
        row_sum += arr[2][j];
    }

    printf("Number of odd elements: %d\n", odd_count);
    printf("Sum of all elements: %d\n", sum);
    printf("Lowest number in the matrix: %d\n", min);
    printf("Sum of elements in the 3rd row: %d\n", row_sum);

    return 0;
}