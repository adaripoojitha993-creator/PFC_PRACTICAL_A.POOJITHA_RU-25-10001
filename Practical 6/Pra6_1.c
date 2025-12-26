#include <stdio.h>
//Name - A.Poojitha
//ERPID - RU -25-10001
int main() {
    int a, b;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    while (a <= b) {
        printf("%d ", a);
        a++;
    }

    return 0;
} 
//Output -   
//Enter a and b: 5 10
//5 6 7 8 9 10 
