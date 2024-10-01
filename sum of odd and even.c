#include<stdio.h>
int main()
{
    int n,i=1,odd=0,even=0;
    printf("Enter N:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0)
            even+=i;
        else
            odd+=i;
        i++;
    }
    printf("sum of even %d\n",even);
    printf("sum of odd %d",odd);
    return 0;

}
