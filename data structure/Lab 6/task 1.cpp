#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};
int c;

struct node* inserti(struct node *root, int x)
{

    if(root==NULL)
    {

        root =(struct node*) malloc(sizeof(struct node));
        root->data = x;
        root->left = NULL;
        root->right= NULL;
    }
    else if(x>=root->data)
        root->right = inserti(root->right, x);
    else
        root->left = inserti(root->left,x);
    return root;
}

int  find_maximum(struct node *root, int b,int c )
{

    if(c==b)
        return root->data;
    else
    {
        c++;
        if(root->right != NULL)
        return find_maximum(root->right,b,c);
    return root->data;

    }

}

int main()
{
    struct node *root=NULL;
    int i,n,a,k;
    cout<<"how many node you want ";
    cin>>n;
    cout<<"enter node ";
    for(i=0; i<n; i++)
    {
        cin>>a;
        root=inserti(root,a);
    }

    cout<<"which largest element: ";
    cin>>k;
    int c;
    int maxi=find_maximum(root,k,c);
    cout<<maxi;
}
