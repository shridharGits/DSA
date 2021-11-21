#include<iostream>
using namespace std;
 
struct node{
    int data;
    int height;
    node *left;
    node *right;
} *root = NULL;

int nodeHeight(node *p){
    int hl = p && p->left ? p->left->height:0;
    int hr = p && p->right ? p->right->height:0;

    return hl>hr ? hl+1 : hr+1;
}

int balanceFactor(node *p){
    int hl = p && p->left ? p->left->height:0;
    int hr = p && p->right ? p->right->height:0;

    return hl-hr;
}

node *LLRotation(node *p){
    node *pl = p->left;
    node *plr = pl->right;

    pl->right = p;
    p->left = plr;

    if (root == p){
        root = pl;
    }
    return pl;
}

node *Rinsert(node *p, int key){
    node *t = NULL;
    if (p == NULL){
        t = new node;
        t->data = key;
        t->height = 1;
        t->left = t->right = NULL;
        return t;
    }
    else if (key < p->data){
        p->left = Rinsert(p->left, key);
    }
    else if (key > p->data){
        p->right = Rinsert(p->right, key);
    }

    p->height = nodeHeight(p);

    if (balanceFactor(p) == 2 && balanceFactor(p->left) == 1){
        return LLRotation(p);
    }

    return p;
}

int main(){
    
    return 0;
}