#include<stdio.h>
int main()
{
    int inch,ft,rem;
    printf("input inch:");
    scanf("%d",&inch);
    ft=inch/12;
    inch=inch%12;
    printf("feet:%d\ninch:%d",ft,inch);
    return 0;
}
