#include<iostream>
using namespace std;

struct node{
    int data;
    int height;
    node *left;
    node *right;
}*root = NULL;


int nodeHeight(node *p){
    int hl = p && p->left ? p->left->height:0;
    int hr = p && p->right ? p->right->height:0;

    return hl>hr ? hl+1:hr+1;
}

int balanceFactor(node *p){
    int hl = p && p->left ? p->left->height:0;
    int hr = p && p->right ? p->right->height:0;

    return hl-hr;
}

node *LLrotation(node *p){
    node *pl = p->left;
    node *plr = pl->right;

    pl->right=p;
    p->left = plr;

    if (root == p){
        root = pl;
    }
    return pl;
}

node *RRrotation(node *p){
    node *pr = p->right;
    node *prl = pr->left;

    pr->left = p;
    p->right = prl;

    if (root == p){
        root = pr;
    }
    return pr;
}

node *LRrotation(node *p){
    node *pl = p->left;
    node *plr = pl->right; 
    
    pl->right = plr->left;
    p->left = plr->right;

    plr->left = pl;
    plr->right = p;

    pl->height = nodeHeight(pl);
    p->height = nodeHeight(p);
    plr->height = nodeHeight(plr);

    if (root == p){
        root = plr;
    }

    return plr;
}

node *RLrotation(node *p){
    node *pr = p->right;
    node *prl = pr->left;

    pr->left = prl->right;
    p->right = prl->left;

    prl->left = p;
    prl->right = pr;

    pr->height = nodeHeight(pr);
    p->height = nodeHeight(p);
    prl->height = nodeHeight(prl);

    if (root == p){
        root = prl;
    }

    return prl;
}

// to build bst
node *Rinsert(node *p, int key){
    node *t = p;
    if (p == NULL){
        node *newnode = new node();
        newnode->data = key;
        newnode->height = 1;
        newnode->left = newnode->right = NULL;
        p = newnode;
        return newnode;
    }
    else if (key < t->data){
        t->left = Rinsert(t->left, key);
    }
    else if (key > t->data){
        t->right = Rinsert(t->right, key);
    }

    p->height = nodeHeight(p);    

    if (balanceFactor(p) == 2 && balanceFactor(p->left) == 1){
        return LLrotation(p);
    }
    else if (balanceFactor(p) == 2 && balanceFactor(p->left) == -1){
        return LRrotation(p);
    }
    else if (balanceFactor(p) == -2 && balanceFactor(p->right) == -1){
        return RRrotation(p);
    } 
    else if (balanceFactor(p) == -2 && balanceFactor(p->right) == 1){
        return RLrotation(p);
    }

    return p;
} 



int main(){
    root = Rinsert(root, 10);
    root = Rinsert(root, 5);
    root = Rinsert(root, 2);
    return 0;
}