#include<stdio.h>


struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;

int i=1;

void delet( struct node *pre, struct node *nex, int n)
{

    if(nex != NULL)
    {
        i++;
        if(n == 1)
        {
            struct node *temp;
            temp=head;
            head= pre->next;
            free(temp);
        }
        else if(i == n )
        {
            struct node *temp;
            temp=nex;
            pre->next=nex->next;
            free(temp);
        }
        else
            delet(nex,nex->next,n);

    }
}

void create()
{
    struct node *curr,*tail;

    int number;
    printf("\nEnter the number of Node : \n");
    scanf("%d",&number);


    printf("Enter your numbers : \n");

    for(int i=0; i<number; i++)
    {
        curr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&curr->data);
        curr->next=NULL;

        if(head==NULL)
        {
            head=curr;
            tail=curr;
        }
        else
        {
            tail->next=curr;
            tail=curr;
        }
    }
}

void display()
{
    struct node *temp;


    temp=head;
    printf("\nNew node  : \n");

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


int main()
{
    create();
    display();
    struct node *temp;
    temp=head;
    int a;
    printf("\nEnter deleting position --> ");
    scanf("%d",&a);
    delet(temp , temp->next , a);
    display();

    return 0;
}

