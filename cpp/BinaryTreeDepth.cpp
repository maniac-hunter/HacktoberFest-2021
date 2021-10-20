#include <iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node*root;
    node*right;
    node*left;
    void depthfinder(node*root);
    node *inserter(int n);
    void display(node*root);
    void inorder(node*root);
    node()
    {
        root=NULL;
        right=NULL;
        left=NULL;
    }
};
node* node::inserter(int n)
{
    node*newnode=new node();
    newnode->data=n;
    newnode->right=NULL;
    newnode->left=NULL;
    if(root==NULL)
    {
        root=newnode;
    }
    else
    {

        node*temp=root;
        node*temp1=root;
        if(root->data>n)
        {
            temp=temp->left;
        }
        else
        {
            temp=temp->right;
        }
        while(temp!=NULL)
        {
            if(n>=temp->data)
            {
                temp1=temp;
                temp=temp->right;
            }
            else
            {
                temp1=temp;
                temp=temp->left;
            }
        }
        if(n>temp1->data)
        {
            temp1->right=newnode;

        }
        else
        {
            temp1->left=newnode;
        }

    }
}
void node::depthfinder(node*root)
{
    queue <node*> q1;
    q1.push(root);
    queue<int> leaf;
    while(!q1.empty())
    {
        node*temp=q1.front();
        if(temp->right==NULL && temp->left==NULL)
        {
            leaf.push(temp->data);
        }
        q1.pop();
        if(temp->right!=NULL)
        {
            q1.push(temp->right);
        }
        if(temp->left!=NULL)
        {

            q1.push(temp->left);
        }
    }

    queue<int>depth;
    while(!leaf.empty())
    {
        int j=1;
        int data=leaf.front();
        node*temp2=root;
        while(temp2->data!=data)
        {
            if(data>temp2->data)
            {
                temp2=temp2->right;
            }
            else
            {
                temp2=temp2->left;
            }
            j++;
        }
        //cout<<j+1<<"\n";
        depth.push(j);
        leaf.pop();

    }
    int ma=depth.front();
    int mi=depth.front();
    depth.pop();
    while(!depth.empty())
    {
        int num=depth.front();
        if(num>ma)
        {
            ma=num;
        }
        if(num<mi)
        {
            mi=num;
        }
        depth.pop();
    }
    cout<<mi<<"\n";
    cout<<ma<<"\n";

}

void node::inorder(node*root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    int n,num;
    cin>>n;
    node n1;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        n1.inserter(num);
    }
    //n1.inorder(n1.root);
    n1.depthfinder(n1.root);
    return 0;
}
