#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *addNode(Node *head, int data){
    Node *newnode = new Node();
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    if(!head){
        return newnode;
    }
    Node *temp = head;
    while(1){
        if(data < temp->data){
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
                break;
            }
        }
    }
    return head;
}

void preOrder(Node *head){
    if(head){
        preOrder(head->left);
        cout<<head->data<<" ";
        preOrder(head->right);
    }
}

int main(){
    Node *head = NULL;
    head = addNode(head, 40);
    head = addNode(head, 20);
    head = addNode(head, 60);
    head = addNode(head, 10);
    head = addNode(head, 70);
    head = addNode(head, 50);
    preOrder(head);
    return 0;
}