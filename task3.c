#include<stdio.h>
int main()
{
    int a[100],n,i,max1,max2;
    printf("enter number of elements in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    max1=a[0];
    for(i=0;i<n;i++){
    if(a[i]>max1) {
      max1 = a[i];
     }
    }
    max2=a[0];
     for(i=1;i<n;i++){
    if(a[i]>max2 && a[i]<max1 ){
         max2=a[i];
        }
    }
    printf("second largest element %d",max2);
    return 0;

}
