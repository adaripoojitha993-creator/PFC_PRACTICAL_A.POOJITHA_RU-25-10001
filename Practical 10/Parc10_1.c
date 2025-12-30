#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[10][10];
    int max, min;
    // Name - A.Poojitha
    // ERP ID - RU-25-10001
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = min = arr[0][0];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (arr[i][j] > max)
                max = arr[i][j];
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
// Enter number of rows: 3
// Enter number of columns: 2
// Enter elements of the 2D array:
// 11
// 22
// 33
// 44
// 55
// 66
// Maximum element = 66
// Minimum element = 11
