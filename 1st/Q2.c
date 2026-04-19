#include <stdio.h>
//print even numbers from 1 to 50 using for loops only
int main() {
    int i;

    for(i = 2; i <= 50; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
