#include <stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,i,rem;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10){
        rem=i%10;
        sum=(sum+pow(rem,3));
    }
    if(sum==n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
