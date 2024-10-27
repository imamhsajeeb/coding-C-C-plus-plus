#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char a;
    struct node *nex;
};

struct node *top=NULL,*curr,*temp,*top1;

void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("\n%c ", temp->a);
        temp=temp->nex;
    }
}

void push(char data)
{
    curr=(struct node*)malloc(sizeof(struct node));
    curr->nex=NULL;
    curr->a=data;
    if(top==NULL)
    {
        top=curr;
    }
    else
    {
        curr->nex=top;
        top=curr;
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
        top1=top1->nex;
        printf("popped value %d ",top->a);
        free(top);
        top=top1;
    }
}
void empty()
{
    if(top==NULL)
    {
        printf("its valid ");
    }
    else
    {
        printf("its not valid");
    }
}
int main()
{
    char s[10];
    int i,x;
    printf("Enter any equation: ");
    gets(s);
    for( i=0; s[i]!=NULL; i++)
    {
        if(s[i]=='(' && s[i]=='{' && s[i]=='[')
        {
            push(s[i]);
        }
    }
    temp=top;
     switch(s[i])
        {
        case ')':
            x=top->a;
            if(x=='(')
            {
                pop();
            }
            break;
        case '}':
            x=top->a;
            if(x=='{')
            {
                pop();
            }
            break;
        case ']':
            x=top->a;
            if(x=='[')
            {
                pop();
            }
            break;
        }
    empty();
    return 0;
}
