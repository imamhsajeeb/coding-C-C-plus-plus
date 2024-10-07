#include <stdio.h>
 int main()
{
  int m,n,p,q,c,d,k,sum=0;
  int first[10][10],second[10][10],multi[10][10];

  printf("enter rows and columns of first matrix:");
  scanf("%d%d", &m, &n);
  printf("enter elements of first matrix.");
  for(c=0;c<m;c++){
    for(d=0;d<n;d++){
      scanf("%d",&first[c][d]);
      }
  }
  printf("enter rows and columns of second matrix.:");
  scanf("%d%d", &p,&q);

  if(n != p){
    printf("the matrices can't be multiplied with each other.");
  }
  else
  {
    printf("enter elements of second matrix.");
  }

    for (c=0;c<p;c++){
      for (d=0;d<q;d++){
        scanf("%d", &second[c][d]);
      }
    }
  for(c=0;c<m;c++){
      for (d=0;d<q;d++){
        for (k=0;k<p;k++){
          sum=sum+first[c][k]*second[k][d];
        }
      multi[c][d]=sum;
        sum=0;
      }
    }

    printf("Product of both matrices:\n");

    for (c=0;c<m;c++){
      for (d=0;d<q;d++){
        printf("%d ", multi[c][d]);
        }
    printf("\n");
  }

  return 0;
}
