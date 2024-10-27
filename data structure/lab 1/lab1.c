#include<stdio.h>
#include<stdlib.h>
struct product
{
    int id,quantity,price;
    char name[20],brand[20],type[20];

};
int main()
{
    int i,n;
    printf("how many product?\n");
    scanf("%d",&n);
    struct product item[100];
    for(i=0;i<n;i++)
    {
        printf("product id:\nname:\nbrand:\ntype:\nquantiy:\nprice:\n");
        scanf("%d%s%s%s%d%d",&item[i].id,&item[i].name,&item[i].brand,&item[i].type,&item[i].quantity,&item[i].price);
    }
    for(i=0;i<n;i++)
    {
        if(item[i].price>40)
        {
            printf("price that are greater than 40, no:%d price:%d",i,item[i].price);

        }
    }
    return 0;
}
