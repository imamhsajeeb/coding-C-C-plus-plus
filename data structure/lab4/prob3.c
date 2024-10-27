#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *ptr;
}*front = NULL,*rear = NULL,*temp,*temp2,*front1,*front2,*front3,*rear2;

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
void deq()
{
    front1 = front;
    if (front1 == NULL)
        {
            printf("\n Error: Trying to display elements from empty queue");
            return;
        }
    else if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = front1;
        }
    else
        {
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }

}
void negative()
{
    int x;
    front1=front;
    while(front1!=NULL)
    {
        x=front1->info;
        if(x<0)
        {
            deq();
        }
        else if(x>0)
        {
            enq2(x);
            deq();
        }
        front1=front1->ptr;
    }
    front3=front2;
    while(front3!=NULL)
    {
        x=front3->info;
        enq(x);
        front3=front3->ptr;
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
    negative();
    printf("after removing negative number \n");
    display();
    return 0;
}
