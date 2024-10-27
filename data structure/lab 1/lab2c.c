#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct product
{
    int id,quantity,price;
    char name[20],brand[20],type[20];

};
int main()
{
    int i,n;
    char b[20];
    printf("how many product?\n");
    scanf("%d",&n);
    struct product item[100];
    struct product *ptr;
    ptr=(struct product*)malloc(n*sizeof(struct product));
    for(i=0;i<n;i++)
    {
        printf("product id:\nname:\nbrand:\ntype:\nquantiy:\nprice:\n");
        scanf("%d%s%s%s%d%d",&ptr[i].id,&ptr[i].name,&ptr[i].brand,&ptr[i].type,&ptr[i].quantity,&ptr[i].price);
    }

    int total=0;

    for(i=0;i<n;i++)
    {
        total=total+(ptr[i].quantity * ptr[i].price);
    }
    printf("total asset is %d",total);
    return 0;
}



