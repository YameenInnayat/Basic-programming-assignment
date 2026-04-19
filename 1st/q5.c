#include <stdio.h>
// print even numbers from 1 to 50 via remainder method
int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}


