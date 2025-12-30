#include <stdio.h>
// A.Poojitha
// ERP ID - RU-25-10001
int main() {
    int n, i, j;
    int arr[10][10];
    int sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
// Enter order of square matrix: 3
// Enter elements of the matrix:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// Sum of diagonal elements = 15
