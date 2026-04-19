#include <stdio.h>
// factorial
int main() {
    int n , result ;


    printf("Enter the number for factorial: ");
    scanf("%d", &n);


    result=1;
    
     for(int j=0; j<=n-1; j++)
     {
        result=(n-j)*result;
     }


            printf("%d\n", result);
    

    return 0;
}
