#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *ptr;
}*front = NULL,*rear = NULL,*temp,*temp2,*front1,*front2,*rear2;

void enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
        rear = temp;
    }
}
void enq2(int data)
{
    if (rear2 == NULL)
    {
        rear2 = (struct node *)malloc(1*sizeof(struct node));
        rear2->ptr = NULL;
        rear2->info = data;
        front2 = rear2;
    }
    else
    {
        temp2=(struct node *)malloc(1*sizeof(struct node));
        rear2->ptr = temp2;
        temp2->info = data;
        temp2->ptr = NULL;
        rear2 = temp2;
    }
}
void display()
{
    front1 = front;
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != NULL)
    {
        printf("%d ", front1->info);
    front1 = front1->ptr;
    }
}
void display2()
{
    front1 = front2;
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != NULL)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
}

void copy()
{
    int x;
    front1=front;
    while(front1!=NULL)
    {
        x=front1->info;
        enq2(x);
        front1=front1->ptr;
    }
}
int main()
{
    int n,x;
    printf("how many queue?\n");
    scanf("%d",&n);
    while(0<n)
    {
        printf("enter data:\n");
        scanf("%d",&x);
        enq(x);
        n--;
    }
    copy();
    printf("after copy \n");
    display2();
    return 0;
}
