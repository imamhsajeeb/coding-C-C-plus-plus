#include<stdio.h>
int main()
{
    int n,i=1,sum=1;
    printf("Enter N:");
    scanf("%d",&n);
    while(i<=n){
        sum*=i;
        i++;
    }
    printf("Factorial of %d: %d",n,sum);
    return 0;
}
