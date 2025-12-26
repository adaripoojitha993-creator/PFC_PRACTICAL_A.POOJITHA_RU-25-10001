#include <stdio.h>
//A.Poojitha
//ERP ID - RU-25-10001
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("%d %d", x, y);

    return 0;
}
//Ouutput -
// 5 2
// 2 5
