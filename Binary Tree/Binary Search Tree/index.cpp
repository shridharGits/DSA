#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};node *root = NULL;

node *insert(node *root, int key){
    node *t = root;
    node *r = NULL;

    if (root == NULL){
        node *newnode = new node;
        newnode->data = key;
        newnode->right = newnode->left = NULL;
        return newnode;
    }
    else{
        while(t){
            r = t;
            if (t->data == key){
                return root;
            }
            else if (key < t->data){
                t = t->left;
            }
            else{
                t = t->right;
            }
        }
        node *newnode= new node;
        newnode->data = key;
        newnode->left = newnode->right = NULL;
        if (key < r->data){
            r->left = newnode;
        }
        else{
            r->right = newnode;
        }

        return root;
    }
}

node *Rinsert(node *root, int key){
    node *t = root;
    if (t == NULL){
        node *newnode = new node;
        newnode->data = key;
        newnode->left = newnode->right = NULL;
        return newnode;
    }
    else if (t->data == key){
        return root;
    }
    else if (key < t->data){
        t->left = Rinsert(t->left, key);
    }
    else{
        t->right =  Rinsert(t->right, key);
    }
    return root;
}

int height (node *root){
    if (root == NULL){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);

    return left > right ? left+1 : right+1;
}

node *inPre(node *p){
    while(p && p->right){
        p = p->right;
    }
    return p;
}

node *inSucc(node *p){
    while (p && p->left)
    {
        p = p->left;
    }
    return p;
}

node *Delete(node *root, int key){
    node *p = root;
    node *q;
    if ( p == NULL){
        return p;
    }
    if (p->left == NULL && p->right == NULL){
        if (p == root){
            root = NULL;
        }
        delete p;
        return NULL;
    }
    if (key < p->data){
        p->left = Delete(p->left, key);
    }
    else if (key > p->data){
        p->right = Delete(p->right, key);
    }
    else{
        if (height(p->left) > height(p->right)){
            q = inPre(p->left);
            p->data = q->data;
            p->left = Delete(p->left, q->data);
        }
        else{
            q = inSucc(p->right);
            p->data = q->data;
            p->right = Delete(p->right, q->data);
        }
    }
    return root;
}

void in(node *root){
    if (root){
        in(root->left);
        cout<<root->data<<"    ";
        in(root->right);
    }
}

int main(){
    node *root = NULL;
    root = Rinsert(root, 10);
    root = Rinsert(root, 50);
    root = Rinsert(root, 100);
    root = Rinsert(root, 80);
    root = Rinsert(root, 40);
    root = Rinsert(root, 20);
    root = Rinsert(root, 70);

    in(root);
    Delete(root, 50);
    cout<<endl;
    in(root);
    return 0;
}