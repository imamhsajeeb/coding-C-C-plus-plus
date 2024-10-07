#include <stdio.h>
 int main()
 {
     int a[10][10],i,j,m,n,flag=1;
     printf("enter rows and columns :");
     scanf("%d%d", &m,&n);
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
     }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        if( i==j && a[i][j]!=1){
        flag=0;
     }
     if(i!=j && a[i][j]!=0){
        flag=0;
     }
        }
     }
     if(flag==1){
        printf("Identify matrix");
     }
     else{
        printf("Not identify matrix");
     }
     return 0;
 }
