#include<stdio.h>
struct emp{
      char name[100];
      int salary;
         }e;
int main()
{
    struct emp e[100];
    int n,i,h=0;
    int c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d",e[i].name,&e[i].salary);
    }
    h=e[0].salary;

    for(i=0;i<n;i++){
        if(e[i].salary>h){
            h=e[i].salary;
            c=i;
        }
    }
    printf("%s %d",e[c].name,h);
    return 0;
}
