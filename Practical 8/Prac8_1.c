#include <stdio.h>
//A.Poojitha
//RU-25-10001
int sumOfDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumOfDigits(n));
    return 0;
}
// Output - 
// 632
// 11
