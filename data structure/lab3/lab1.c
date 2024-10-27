#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *ptr;
};
struct node *top=NULL,*top1,*temp;
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
void display()
{
    top1=top;
    if(top1==NULL)
    {
        printf("Stack is empty");
        return;
    }
    while(top!=NULL)
    {
        printf("%d ",top1->info);
        top1=top1->ptr;
    }
}
void pop()
{
    top1=top;
    if(top1==NULL)
    {
        printf("error: stack is empty");
        return;
    }
    else
    {
        top1=top1->ptr;
        printf("popped value %d ",top->info);
        free(top);
        top=top1;
    }
}
int sod(int num)
{
    int sum=0;
    while(num>0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    return sum;
}
int main()
{
    int s,i,a[]={232,501,40,57,53};
    for(i=0;i<5;i++)
    {
        s=sod(a[i]);
        push(s);
    }
    display();
return 0;
}
