#include <stdio.h>

int main() {
    int i;

    // 1 to 10
    printf("1 to 10:\n");
    for(i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    // 10 to 1
    printf("\n10 to 1:\n");
    for(i = 10; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}
