#include <stdio.h>
// square of square 
int main() {
    int n , result=1, i ;

    printf("Enter the number: ");
    scanf("%d", &i);

    printf("Enter the times: ");
    scanf("%d", &n);


    result=i;
    
     for(int j=1; j<=n-1; j++)
     {
        result=result*result;
     }


            printf("%d\n", result);
    

    return 0;
}
