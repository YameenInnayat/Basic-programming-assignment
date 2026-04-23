#include <stdio.h>
// print multiplication table of n
int main(){
    int n;
    int result;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i= 1; i<=10 ;i++){
        result=i*n;
        {
        printf("%d"" * ""%d"" = ""%d\n",n,i,result);
        }
    }
    return 0;
}
