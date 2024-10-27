#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *ptr;
}*front = NULL,*rear = NULL,*top=NULL,*top1,*temp,*temp2,*front1;

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
void push(int data)
{
    if(top==NULL)
    {
        top=(struct node*)malloc(1*sizeof(struct node));
        top->ptr=NULL;
        top->info=data;
    }
    else
    {
        temp=(struct node*)malloc(1*sizeof(struct node));
        temp->ptr=top;
        temp->info=data;
        top=temp;
    }
}
void copy()
{
    int x;
    temp2=top;
    while(temp2!=NULL)
    {
        x=temp2->info;
        enq(x);
        temp2=temp2->ptr;
    }
}
int main()
{
        int n,x;
    printf("how many stack?\n");
    scanf("%d",&n);
    while(0<n)
    {
        printf("enter data:\n");
        scanf("%d",&x);
        push(x);
        n--;
    }
    copy();
    printf("after copy stack to queue\n");
    display();
    return 0;
}
