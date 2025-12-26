#include <stdio.h>
//Name - A.Poojitha
//ERP ID - RU-25-10001
int main() {
    int i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0)
            continue;

        sum = sum + i;
    }

    printf("Sum of even numbers = %d\n", sum);

    return 0;
}
//Output - 
// Enter the value of n: 10
// Sum of even numbers = 30
