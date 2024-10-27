#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *right_child;
    struct node *left_child;
};

struct node* inserti(struct node *root, int x)
{

    if(root==NULL)
    {

         root =(struct node*) malloc(sizeof(struct node));
         root->data = x;
         root->left_child = NULL;
         root->right_child = NULL;
    }
    else if(x>=root->data)
        root->right_child = inserti(root->right_child, x);
    else
        root->left_child = inserti(root->left_child,x);
    return root;
}

struct node* delet(struct node *root, int x)
{
    if(root==NULL)
        return NULL;
    if (x>root->data)
        root->right_child = delet(root->right_child, x);
    else if(x<root->data)
        root->left_child = delet(root->left_child, x);
    else
    {
        if(root->left_child==NULL && root->right_child==NULL)
        {
            free(root);
            return NULL;
        }
    }
    return root;
}

int main()
{
    struct node *root= NULL;
    int search1;
    int n,i,d;
    cout<<"how many node you want ";
    cin>>n;
    cout<<"enter node ";
    for(i=0; i<n; i++)
    {
        cin>>d;
        root=inserti(root,d);
    }
    root = delet(root, 1);

    return 0;
}
