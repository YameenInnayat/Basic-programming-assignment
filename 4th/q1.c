#include <stdio.h>
// Check armstrong number 2 to 4 digit numbers
int main() {
    int u=1, o=1, t=1, s=1, sum, a, b, c, d, n;

    printf("Enter the number: ");
    scanf("%d", &sum);

    if (sum >= 10 && sum <= 99)
        n = 2;
    else if (sum >= 100 && sum <= 999)
        n = 3;
    else if (sum >= 1000 && sum <= 9999)
        n = 4;
    else {
        printf("Enter a 2, 3 or 4 digit number only\n");
        return 0;
    }

    if (n == 2) {
        a = sum / 10;
        b = sum % 10;

        for (int k=1; k<=n; k++) {
            o = o * a;
            t = t * b;
        }

        if (sum == o+t)
            printf("%d is an Armstrong number\n", sum);
        else
            printf("%d is not an Armstrong number\n", sum);
    }

    else if (n == 3) {
        a = sum / 100;
        b = (sum % 100) / 10;
        c = sum % 10;

        for (int k=1; k<=n; k++) {
            o = o * a;
            t = t * b;
            s = s * c;
        }

        if (sum == o+t+s)
            printf("%d is an Armstrong number\n", sum);
        else
            printf("%d is not an Armstrong number\n", sum);
    }

    else if (n == 4) {
        a = sum / 1000;
        b = (sum % 1000) / 100;
        c = (sum % 100) / 10;
        d = sum % 10;

        for (int k=1; k<=n; k++) {
            o = o * a;
            t = t * b;
            s = s * c;
            u = u * d;
        }

        if (sum == o+t+s+u)
            printf("%d is an Armstrong number\n", sum);
        else
            printf("%d is not an Armstrong number\n", sum);
    }

    return 0;
}
