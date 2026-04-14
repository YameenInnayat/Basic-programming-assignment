#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i;

    printf("Enter the number of terms for fibonaci: ");
    scanf("%d", &n);

    // Fibonacci Sequence
    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
