#include <stdio.h>
// square pattern stars

int main() {
    int n=5, i, j;
    for(i = 1; i <= n; i++) {        
        for(j = 1; j <= n; j++) {    
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
