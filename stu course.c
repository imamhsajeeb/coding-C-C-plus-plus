#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,sum,max,row,col;
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0;i<row;i++){
        sum=0;
        max=0;
        for(j=0;j<col;j++){
           sum=sum+a[i][j];
           if(max<a[i][j])
            max=a[i][j];
        }
        printf("total marks of %d student is %d maximum number is %d\n",i,sum,max);
    }
return 0;
}
