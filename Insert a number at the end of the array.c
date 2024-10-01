#include<stdio.h>
int main()
{
    int a[100],i,n,pos=3;
    scanf("%d",&n);
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=10;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=n;
     for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}
