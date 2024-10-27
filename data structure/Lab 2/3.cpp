#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;


struct Node
{
    int data;
    struct Node *nex;
};
struct Node *head,*tail,*prv,*curr,*nex, *temp,*head1,*head2,*item;

void print()
{

    temp = head;
    printf("\n linked list :" );
    while(temp != NULL)
    {
        printf(" %d   ", temp->data);
        temp = temp->nex;
    }
}

void create()
{
    char ch1;
    cout<<"Input Again(y/n) --> ";
    cin>>ch1;

    while(ch1 != 'n')
    {
        printf("\n Enter Data:");
        item = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &item->data);
        item->nex = NULL;
        if (head == NULL)
        {
            head = item;
            tail = item;
        }
        else
        {
            tail->nex = item;
            tail = item;
        }
        cout<<" Do you want Input Again(y/n) --> ";
        cin>>ch1;
    }

}

void creat1()
{
    int a;
    Node *t;
    t=head;
    while(t!=NULL)
    {
        a=t->data;
        if(a>=0)
        {
            if(head1==NULL)
            {
                curr=(Node*)malloc(sizeof(Node));
                curr->nex=NULL;
                curr->data=a;
                head1=curr;
                tail=curr;
            }
            else
            {
                curr=(Node*)malloc(sizeof(Node));
                curr->nex=NULL;
                curr->data=a;
                tail->nex=curr;
                tail=curr;
            }

        }
        t=t->nex;
    }
    temp=head1;
    printf("\n Positive linked list :" );
    while(temp!= NULL)
    {
        printf(" %d   ", temp->data);
        temp = temp->nex;
    }
}

void creat2()
{
    int b;
    Node *s;
    s=head;
    while(s!=NULL)
    {
        b=s->data;
        if(b<0)
        {
            if(head2==NULL)
            {
                curr=(Node*)malloc(sizeof(Node));
                curr->nex=NULL;
                curr->data=b;
                head2=curr;
                tail=curr;
            }
            else
            {
                curr=(Node*)malloc(sizeof(Node));
                curr->nex=NULL;
                curr->data=b;
                tail->nex=curr;
                tail=curr;
            }

        }
        s=s->nex;
    }
    temp=head2;
    printf("\n Negative linked list :" );
    while(temp!= NULL)
    {
        printf(" %d   ", temp->data);
        temp = temp->nex;
    }
}


int main()
{
    create();
    print();

    cout<<endl;

    creat1();
    cout<<endl;

    creat2();

    return 0;
}

