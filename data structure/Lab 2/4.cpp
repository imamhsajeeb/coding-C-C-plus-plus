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
