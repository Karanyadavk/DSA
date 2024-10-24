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

node* insert(node* root, int d){
    if(root==NULL){
        root = new node(d);
        return root;
    }

    if(root->data>d){
        root->left = insert(root->left, d);
    }
    else{
        root->right = insert(root->right, d);
    }
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

void levelOrderTraversal(node* root){
    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout<< temp->data <<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


void takeInput(node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root = insert(root, data);
        cin>>data;
    }
}

node* minVal(node* root){
    node* temp = root;

    while(temp->left!=NULL){
        temp = temp->left;
    }

    return temp;
}

node* maxVal(node* root){
    node* temp = root;

    while(temp->right!=NULL){
        temp = temp->right;
    }

    return temp;
}

node* deletion(node* root, int val){
    if(root==NULL){
        return root;
    }
    
    // found
    if(root->data==val){

        // 0 child
        if(root->right==NULL && root->left==NULL){
            delete root;
            return NULL;
        }

        // 1 child
            // right NULL

            else if(root->right==NULL && root->left!=NULL){
                node* temp = root->left;
                delete root;
                return temp;
            }

            // left NULL

            else if(root->right!=NULL && root->left==NULL){
                node* temp = root->right;
                delete root;
                return temp;
            }

        // 2 child

        else{
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deletion(root->right, mini);
            return root;
        }

        
    }

    // greater than
    else if(root->data>val){
        root->left = deletion(root->left, val);
        return root;
    }

    // less than
    else{
        root->right = deletion(root->right, val);
        return root;
    }
}

int main(){

    node* root = NULL;

    cout<<"Insert the data : "<<endl;
    takeInput(root);

    cout<<"Printing the BST :"<<endl;
    levelOrderTraversal(root);

    cout<<"Printing the inorder :"<<endl;
    inorder(root);

    cout<<endl<<"Printing the preorder :"<<endl;
    preorder(root);

    cout<<endl<<"Printing the postorder :"<<endl;
    postorder(root);

    cout<<endl<<"printing the minVal : "<<minVal(root)->data<<endl;
    cout<<"printing the maxVal : "<<maxVal(root)->data<<endl;

    deletion(root, 50);
    cout<<"Printing the BST :"<<endl;
    levelOrderTraversal(root);
    
    return 0;
}