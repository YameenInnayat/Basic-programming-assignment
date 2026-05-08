#include <stdio.h>
int main()
{
    int a = 0, b = 1, sum, i;
    int fib[10];

    for(i = 0; i < 10; i++){

        fib[i] = a;

        sum = a + b;
        a = b;
        b = sum;

    }
    for (i = 9; i >=0; i--){
        printf("%d ", fib[i]);
    }
    return 0;
}
