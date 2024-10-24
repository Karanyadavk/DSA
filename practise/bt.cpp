#include <iostream>
#include <queue>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* binaryTree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the value of left node : "<<endl;
    root->left = binaryTree(root->left);

    cout<<"Enter the value of right node : "<<endl;
    root->right = binaryTree(root->right);
    
    return root;
}


void inorder(node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){

    node* root = new node(2);

    binaryTree(root);

    inorder(root);
    preorder(root);
    postorder(root);

    return 0;
}