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
int s;
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

void siz()
{
    int s=0;
    temp=head;
    while (temp != NULL)
    {
        ++s;
        temp= temp ->nex;
    }
    cout<<" Total Length: "<<s<<endl;

}

void delet()
{
     temp=head;

    while(head != NULL)
    {

        head = head ->nex;
        free(temp);

    }
    if(head == NULL)
        cout<<endl<<" Linked list deleted."<<endl;
}

int main()
{
    create();
    print();
    siz();
    delet();


    return 0;
}

