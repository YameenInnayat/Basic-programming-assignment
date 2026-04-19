#include <stdio.h>

int main() {
    int n=3, o=1, t=1, s=1, sum, a, b, c;

    printf("Enter the number: ");
    scanf("%d", &sum);

    a = sum / 100;
    b = (sum % 100) / 10;
    c = sum % 10;

    for (int k=1; k<=n; k++) {
        o = o * a;
        t = t * b;
        s = s * c;
    }

    if (sum == o+t+s)
        printf("Is an Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
