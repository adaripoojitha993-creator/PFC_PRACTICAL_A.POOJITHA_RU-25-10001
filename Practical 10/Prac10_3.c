#include <stdio.h>
// Name - A.Poojitha
// ERP ID - RU-25-10001
int main() {
    int r, c, i, j;
    int arr[10][10];
    int sum;

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

    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
// Enter number of rows: 3
// Enter number of columns: 2
// Enter elements of the 2D array:
// 1
// 2
// 3
// 4
// 5
// 6
// Sum of row 1 = 3
// Sum of row 2 = 7
// Sum of row 3 = 11
