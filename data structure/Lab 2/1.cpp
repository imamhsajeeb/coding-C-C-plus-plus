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
struct Node *head,*tail,*prv,*curr,*nex, *temp;

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

    struct Node *item;

    printf("\n Enter Data:");
    for(int i=0; i<3; i++)
    {
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
    }



}

void revers()
{
    prv=nex= NULL;
    curr=head;
    while(curr!= NULL)
    {
        nex=curr->nex;
        curr->nex=prv;
        prv=curr;
        curr=nex;
    }
    head=prv;
}

int main()
{
    create();
    print();
    cout<<endl<<" After Reverse.";
    revers();
    print();

    return 0;
}
