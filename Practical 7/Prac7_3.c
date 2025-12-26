#include <stdio.h>
//A.Poojitha
//RU-25-10001
int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
// Output - 
// A
// AB
// ABC
// ABCD

