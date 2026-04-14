#include <stdio.h>
// fibonnaci for n 
int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
