#include <stdio.h>

int fact(int n);
void ncr(int n, int r);

int main()
{
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (n < 0 || r < 0) {
        printf("Error: n and r must be non-negative.\n");
        return 1;
    }
    if (r > n) {
        printf("Error: r cannot be greater than n.\n");
        return 1;
    }

    ncr(n, r);
    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

void ncr(int n, int r)
{
    int result = fact(n) / (fact(r) * fact(n - r));
    printf("C(%d, %d) = %d\n", n, r, result);
}
