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
int n,n1,arr[100],brr[100],term=0,term1=0;
struct node* inser(struct node *root, int x)
{

    if(root==NULL)
    {
        root =(struct node*) malloc(sizeof(struct node));
        root->data = x;
        root->left_child = NULL;
        root->right_child = NULL;
    }
    else if(x>=root->data)
        root->right_child = inser(root->right_child, x);
    else
        root->left_child = inser(root->left_child,x);
    return root;
}
struct node* inser1(struct node *root, int x)
{

    if(root==NULL)
    {
        root =(struct node*) malloc(sizeof(struct node));
        root->data = x;
        root->left_child = NULL;
        root->right_child = NULL;
    }
    else if(x>=root->data)
        root->right_child = inser1(root->right_child, x);
    else
        root->left_child = inser1(root->left_child,x);
    return root;
}

void inorder(struct node *r)
{
    if(r!=NULL)
    {
        inorder(r->left_child);
        arr[term]=r->data;
        term++;
        inorder(r->right_child);
    }

}
void inorder1(struct node *r)
{
    if(r!=NULL)
    {

        inorder(r->left_child);
        brr[term1]=r->data;
        term1++;
        inorder(r->right_child);
    }

}
void cmpr()
{
    int o=0;
    if(n!=n1)
        cout<<"NO";
    else
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=brr[i])
            {
                o=1;
                break;
            }
        }
    }

    if(o==1)
        cout<<"NO";
    else
        cout<<"YES";
}

int main()
{
    struct node *root= NULL, *root1=NULL;
    int d,k,d1;
    cout<<"\n Enter 1st BST number of nodes:";
    cin>>n;
    cout<<"\n Enter node:";
    for(int i=0; i<n; i++)
    {

        cin>>d;
        root = inser(root, d);
    }

    inorder(root);

    cout<<"\n Enter 2nd BST number of nodes:";
    cin>>n1;
    cout<<"\n Enter node:";
    for(int i=0; i<n1; i++)
    {

        cin>>d1;
        root1 = inser1(root1, d1);
    }

    inorder1(root1);

    cmpr();
}

