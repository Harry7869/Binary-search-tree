#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
int res;
bool f;
void inorder(node* root,int k)
{
    if(root==NULL)
    return;
    
    inorder(root->left,k);
    if(root->data>k && f==true)
    {
        res=root->data;
        f=false;
    }
    inorder(root->right,k);
    
}
void inOrderSuccessor(node *root, int x)
{
    node* ans;
    res=0;
    f=true;
    int k=x;
    inorder(root,k);
    if(res!=0)
    cout<<res<<"\n";
    else
    cout<<"-1\n";
}
int main()
{
    node *root=new node(30);
    root->left=new node(20);
    root->right=new node(50);
    root->left->left=new node(10);
    root->right->left=new node(40);
    root->right->right=new node(60);
    root->right->right->right=new node(70);
    inOrderSuccessor(root,10);
    return 0;
}