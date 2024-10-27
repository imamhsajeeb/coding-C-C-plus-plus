#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char a;
    struct node *next;
};

struct node *top=NULL,*curr,*temp,*top1=NULL,*temp1=NULL,*temp2=NULL;

void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("\n%c ", temp->a);
        temp=temp->next;
    }
}

void push(char data)
{
    curr=(struct node*)malloc(sizeof(struct node));
    curr->next=NULL;
    curr->a=data;
    if(top==NULL)
    {
        top=curr;
    }
    else
    {
        curr->next=top;
        top=curr;
    }
}

void push1(char data)
{
    curr=(struct node*)malloc(sizeof(struct node));
    curr->next=NULL;
    curr->a=data;
    if(top1==NULL)
    {
        top1=curr;
    }
    else
    {
        curr->next=top1;
        top1=curr;
    }
}

void cmpr()
{
    int t=0;
    temp1=top;
    temp2=top1;

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->a!=temp2->a)
        {
            t=1;
            break;
        }
       temp1=temp1->next;
       temp2=temp2->next;
    }
    if(t==0)
        printf("\npalindrome.");
    else
        printf("\nnot a palindrome.");
}

int main()
{
    char s[10];
    int i;
    printf("Enter any string:");
    gets(s);
    for( i=0; s[i]!=NULL; i++)
    {
        push(s[i]);
    }
    temp=top;
    while(temp!=NULL)
    {
        push1(temp->a);
        temp=temp->next;
    }

    cmpr();
    return 0;
}



