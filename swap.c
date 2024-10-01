#include<stdio.h>
int main()
{
    int x,y;
    printf("x:");
    scanf("%d",&x);
    printf("y:");
    scanf("%d",&y);
    x=x-y;
    y=x+y;
    x=y-x;
    printf("x:%d\ny:%d",x,y);
    return 0;
}
