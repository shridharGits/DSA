#include<bits/stdc++.h>
using namespace std;

struct node{
    node *left;
    int data;
    node *right;
};

class tree{
    public:
    node *create(node *root){
        node *newnode, *temp;
        char ch = 'y';
        char side;
        do
        {
            node *newnode = new node;
            cout<<"Enter value : ";
            cin>>newnode->data;
            newnode->left = newnode->right = NULL;

            if(root == NULL){
                root = newnode;
            }
            else{
                temp = root;
                while (1)
                {
                    cout<<"Enter side : ";
                    cin>>side;
                    if(side == 'l'){
                        if(temp->left == NULL){
                            temp->left = newnode;
                            break;
                        }
                        else{
                            temp = temp->left;
                        }
                    }
                    else{
                        if(temp->right == NULL){
                            temp->right = newnode;
                            break;
                        }
                        else{
                            temp = temp->right;
                        }
                    }
                }
            }
            cout<<"do you want to add more : ";
            cin>>ch;
        } while (ch == 'y');
        
    return root;
    }

    void inorder(node *root){
        if(root){
            inorder(root->left);
            cout<<root->data<<"    ";
            inorder(root->right);
        }
    }

    void iterativeInorder(node *root){
        stack<node*> s;
        node *temp = root;

        while(!s.empty() || temp){
            if(temp){
                s.push(temp);
                temp = temp->left;
            }
            else{
                temp = s.top();
                s.pop();
                cout<<temp->data<<"    ";
                temp = temp->right;
            }
        }
    }

    void preorder(node *root){
        if(root){
            cout<<root->data<<"    ";
            preorder(root->left);
            preorder(root->right);
        }
    }

    void iterativePreorder(node *root){
        stack<node*> s;
        node *temp = root;

        while(!s.empty() || temp){
            if(temp){
                cout<<temp->data<<"    ";
                s.push(temp);
                temp = temp->left;
            }
            else{
                temp = s.top();
                s.pop();
                temp = temp->right;
            }
        }
    }

    void postorder(node *root){
        if(root){
            postorder(root->left);
            postorder(root->right);
            cout<<root->data<<"    ";
        }
    }

    void iterativePostorder(node *root){
        stack<node*> s;
        stack<int> t;
        node *temp = root;
        s.push(temp);

        while(!s.empty()){
            node *p  = s.top();
            s.pop();
            t.push(p->data);

            if(p->left){
                s.push(p->left);
            }
            if(p->right){
                s.push(p->right);
            }
        }

        while (!t.empty())
        {
            cout<<t.top()<<"    ";
            t.pop();
        }
    }

    void kthAncestor(node *root, int k){
        if(!root){
        // cout<<"check 1"<<endl;
            cout<<-1<<endl;
            return;
        }
        else if(k == 0){
        // cout<<"check 2"<<endl;
            cout<<root->data<<endl;
        }
        else if(root->left){
        // cout<<"check 3"<<endl;
            kthAncestor(root->left, --k);
        }
        else if(root->right){
        // cout<<"check 4"<<endl;
            kthAncestor(root->right, --k);
        }
        else{
            cout<<-1<<endl;
        }
    }

    void in(node *root, int val, int k){
        if(!root){
            return;
        }
        if(root->data == val){
            // cout<<"checked"<<endl;
            kthAncestor(root,k);
        }
        in(root->left, val, k);
        in(root->right, val, k);
    }
};

int main(){
    node *root = NULL;
    tree ob;
    root = ob.create(root);
    cout<<endl;

    ob.inorder(root);
    cout<<endl;
    // ob.iterativeInorder(root);
    // cout<<endl;

    // ob.preorder(root);
    // cout<<endl;
    // ob.iterativePreorder(root);
    // cout<<endl;
    
    // ob.postorder(root);
    // cout<<endl;
    // ob.iterativePostorder(root);
    // cout<<endl;
    int k;
    int val;
    cout<<"enter the node data: ";
    cin>>val;
    cout<<"enter k : ";
    cin>>k;
    ob.in(root,val,k);
    return 0;
}
//        4
//     /   \
//    2    6
//  / \   / 
// 3  1  5  
// 
//4y2ly3lly1lry6ry5rl