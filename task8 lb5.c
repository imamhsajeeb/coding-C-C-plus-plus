#include <stdio.h>
#include<math.h>
int main()
{
    int n,sum,i,rem,a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(n=a;n<=b;n++){
        sum=0;
    for(i=n;i>0;i=i/10){
        rem=i%10;
        sum=(sum+pow(rem,3));
    }
    if(sum==n)
        printf("%d ",n);
    }

    return 0;
}

