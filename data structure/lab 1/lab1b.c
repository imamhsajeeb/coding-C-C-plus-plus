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
    struct product *ptr,*ptr1;
    ptr=(struct product*)malloc(n*sizeof(struct product));
    //ptr1=ptr;
    for(i=0;i<n;i++)
    {
        printf("product id:\nname:\nbrand:\ntype:\nquantiy:\nprice:\n");
        scanf("%d%s%s%s%d%d",&ptr[i].id,&ptr[i].name,&ptr[i].brand,&ptr[i].type,&ptr[i].quantity,&ptr[i].price);
    }
    for(i=0;i<n;i++)
    {
        if(ptr[i].price>40)
        {
            printf("price that are greater than 40, no:%d price:%d\n",i,ptr[i].price);
        }

    }
    return 0;
}

