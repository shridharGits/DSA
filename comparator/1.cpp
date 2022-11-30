#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *addNode(Node *root, int data){
    Node *newnode = new Node();
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    // if(root)
    Node *temp = root;
    char ch = 'y';
    do{
        char side;
        cout<<"on which side you want to insert the new node (l/r)? "<<endl;
        cin>>side;

        if(ch == 'l'){
            cout<<"inside";
            if(temp->left){
                temp = temp->left;
            }
            else{
                temp->left = newnode;
                break;
            }
        }
        else{
            if(temp->right){
                temp = temp->right;
            }
            else{
                temp->right = newnode;
            }
        }
        cout<<"do you want to continue? ";
        cin>>ch;
    }while(ch == 'y');

    return root;
}

void printf(Node *root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    printf(root->left);
    printf(root->right);
}

int main(){
    Node *root = NULL;
    root = addNode(root, 1);
    printf(root);
    return 0;
}