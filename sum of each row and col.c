#include<stdio.h>
int main()
{
    int a[100][100],row,col,i,j,sum1,sum2;
    printf("inter row and col:\n");
    scanf("%d %d",&row,&col);
    printf("enter array element");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0;i<row;i++){

        sum1=0;
        sum2=0;
         for(j=0;j<col;j++){
           sum1=sum1+a[i][j];
           sum2=sum2+a[j][i];
        }
        printf("sum of %d row %d and sum of %d col %d\n",i,sum1,j,sum2);
     }



    return 0;

}
