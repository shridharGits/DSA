#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
} *root = NULL;

// iterative
node *insert(node *root, int key){
    node *t = root;
    node *r = NULL;
    if (root == NULL){
        node *newnode = new node;
        newnode->data = key;
        newnode->left = newnode->right = NULL;
        return newnode;
    }
    while(t!=NULL){
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
    node *newnode = new node;
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

// recursive
node *Rinsert(node *root, int key){
    node *t = root;

    if (t==NULL){
        node *newnode = new node;
        newnode->data = key;
        newnode->left = newnode->right = NULL;
        return newnode;
    }
    else if (key == t->data){
        return root;
    }
    else if (key < t->data){
        t->left = Rinsert(t->left, key);
    }
    else{
        t->right = Rinsert(t->right, key);
    }
    return root;
}

void inOrder(node *root){ 
    if (root!=NULL){
        inOrder(root->left);
        cout<<root->data<<"    ";
        inOrder(root->right);
    }
}

// iterative
node *search(node *root, int key){
    node *t = root;

    while(t){
        if (t->data == key){
            return t;
        }
        else if (key < t->data){
            t = t->left;
        }
        else{
            t = t->right;
        }
    }
    return NULL;
}

// recursive
node *Rsearch(node *root, int key){
    node *t = root;
        if (key == t->data){
            return t;
        }
        else if (key < t->data){
            return Rsearch(t->left, key);
        }
        else{
            return Rsearch(t->right, key);
        }
    return NULL;
}

// recursive

int Height(node *p){
    if (p == NULL){
        return 0;
    }
    int left = Height(p->left);
    int right = Height(p->right);
    return left > right ? left+1 : right+1;
}

node *inPre(node *p){
    while(p && p->right){
        p = p->right;
    }
    return p;
}

node *inSucc(node *p){
    while(p && p->left){
        p = p->left;
    }
    return p;
}

node *Delete(node *root, int key){
    node *q;
    node *p = root;
    if (p == NULL){
        return NULL;
    }

    if (p->left == NULL && p->right == NULL){
        if (p == root)
            root = NULL;
        delete p;
        return NULL;
    }

    if (key < p->data){
        p->left = Delete(p->left, key);
    }
    else if (key > root->data){
        p->right = Delete(p->right, key);
    }
    else{
        if (Height(p->left) > Height(p->right)){
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

node *createPre(int pre[], int n, node *root){
    stack <node *> s;
    node *p,*t;
    int i = 0;

    root = new node;
    root->data = pre[i++];
    root->left = root->right = NULL;
    p = root;

    while(i<n){
        if (pre[i]<p->data){
            t = new node;
            t->data = pre[i++];
            t->left = t->right = NULL;
            p->left = t;
            s.push(p);
            p = t;
        }
        else{
            if (pre[i] > p->data && (s.empty() || (pre[i]<s.top()->data))){
                t = new node;
                t->data = pre[i++];
                t->left = t->right = NULL;
                p->right = t;
                p = t;
            }
            else{
                p = s.top();
                s.pop();
            }
        }
    }
    return root;
}

// check if bst has only one child;
bool hasOnlyOneChild(node *root){
    node *t = root;
    if (t->left && t->right){
        return false;
    }
    else if (t->left){
        return hasOnlyOneChild(t->left);
    }
    else if (t->right){
        return hasOnlyOneChild(t->right);
    }
    return true;
}


int largestNumber(node *root, int n){
    // cout<<root->data<<endl;
    if (root->left == NULL || root->right == NULL || root->data == n){
        return root->data;
    }
    else if (n < root->data){
        return largestNumber(root->left,n);
    }
    else if (n > root->data){
        return largestNumber(root->right,n);
    }
    return root->data;
}

// p3: find the distance between two nodes

int searchNode(node *root, int a){
    if (root->data == a){
        return 0;
    }
    else if (a < root->data){
        return searchNode(root->left, a) + 1;
    }
    else if (a > root->data){
        return searchNode(root->right, a) + 1;
    }
    return -1;
}

node *lca(node *root ,int a, int b){
    if ((root->data == a || root->data == b) || (a<root->data && b>root->data)){
        return root;
    }
    else if (a<root->data && b<root->data){
        return lca(root->left, a,b);
    }
    else if (a>root->data && b>root->data){
        return lca(root->right,a,b);
    }
    return NULL;
}

int distanceBetween(node *root, int a, int b){
    node *d = lca(root, a,b);
    int d1 = searchNode(d,a);
    int d2 = searchNode(d,b);

    return d1+d2;
}

int main(){
    node *root = NULL;
    // Inserting - Iterative
    // root=insert(root, 10);
    // root=insert(root, 5);
    // root=insert(root, 20);
    // root=insert(root, 8);
    // root=insert(root, 30);
    // Inserting - Recursive
    // root=Rinsert(root, 50);
    // root=Rinsert(root, 10);
    // root=Rinsert(root, 40);
    // root=Rinsert(root, 20);
    // root=Rinsert(root, 30);

    // Inorder
    // inOrder(root);
    // cout<<endl;

    // Searching - Iterative
    // int key = 30;
    // if (search(root, key)){
    //     cout<<"Element " << search(root, key)->data << " is found!"<<endl;
    // } 
    // else{
    //     cout<<"not found!"<<endl;
    // }

    // Searching - Recursive
    // int key = 9;
    // if (Rsearch(root, key)!=NULL){
    //     cout<<"Element " << Rsearch(root, key)->data << " is found!"<<endl;
    // } 
    // else{
    //     cout<<"not found!"<<endl;
    // }

    // Delete
    // cout<<"After delete : "<<endl;
    // root = Delete(root, 30);
    // inOrder(root);
    // cout<<endl;

    // Preorder
    int pre[] = {5,2,1,3,12,9,21,19,25};
    int n = sizeof(pre)/sizeof(pre[0]);
    root = createPre(pre,n,root);
    inOrder(root);
    cout<<endl;

    // P1: check if bst has only one child
    // if (hasOnlyOneChild(root)){
    //     cout<<"Tree has only one child!"<<endl;
    // }
    // else{
    //     cout<<"Tree has two children somewhere!"<<endl;
    // }


    // p2: largest number in bst which is less than or equal to n
    // cout<<largestNumber(root,10)<<endl;

    // p3: find the distance between two nodes
    cout<<distanceBetween(root,1,2);


    return 0;
}