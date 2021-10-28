#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node * insert(Node * root, int data) {
        Node* current=(Node*)malloc(sizeof(Node));
        Node* temp=(Node*)malloc(sizeof(Node));
        Node* new_node=NULL;
        new_node->data=data;
        current=root;
        temp=root;
        while (current!=NULL) {
        temp=current;
        if(current->data<data){
            current=current->right;
        }
        else{
            current=current->left;
        }
        }
        if(temp->data<data){
            temp->right=new_node;
        }
        else{
            temp->left=new_node;
        }
         return root;
    }
void preorder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

int main(){
    struct Node* root =new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    insert(root,6);
    preorder(root);
}
