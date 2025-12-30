#include <stdio.h>
// Name - A.Poojitha
// ERPID - RU-25-10001
int main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
// Enter number of elements: 5
// Enter array elements:
// 22
// 334
// 67
// 111
// 788
// Sum of even elements = 1144
