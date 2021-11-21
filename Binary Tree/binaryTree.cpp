#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node *right;
};

class tree{
    public: 

        node *create(node *root){
            node *newnode, *temp;
            char side, op;

            do{
                newnode = new node;
                cout<<"Enter data : ";
                cin>>newnode->data;
                newnode->left = newnode->right = NULL;

                if (root == NULL){
                    root = newnode;
                }
                else{
                    temp = root;

                    while(1){
                        cout<<"Enter the side : ";
                        cin>>side;
                        if (side == 'l'){
                            if (temp->left == NULL){
                                temp->left = newnode;
                                break;
                            }
                            else{
                                temp = temp->left;
                            }
                        }
                        else{
                            if (temp->right == NULL){
                                temp->right = newnode;
                                break;
                            }
                            else{
                                temp = temp->right;
                            }
                        }
                    }
                }
                cout<<"do you want to continue : ";
                cin>>op;
            }while(op == 'y');
            
            return root;
        }

        void preOrder(node *root){
            if(root==NULL){
                return;
            }
            cout<<root->data<<"    ";
            preOrder(root->left);
            preOrder(root->right);
        }

        void inOrder(node *root){
            if (root ==NULL){
                return;
            }
                inOrder(root->left);
                cout<<root->data<<"    ";
                inOrder(root->right);
        }

        void postOrder(node *root){
            if (root == NULL){
                return;
            }
            postOrder(root->left);
            postOrder(root->right);
            cout<<root->data<<"    ";
        }

        void levelOrder(node *root){
            if (root == NULL)
                return;

            queue<node*> q;

            q.push(root);
            q.push(NULL);

            while(!q.empty()){
                node *temp = q.front();
                q.pop();
                if (temp != NULL){
                    cout<<temp->data<<"    ";
                    if (temp->left){
                        q.push(temp->left);
                    }
                    if (temp->right){
                        q.push(temp->right);
                    }
                }
                else if (!q.empty()){
                    q.push(NULL);
                }
            }
        }

        int sumAtKthLevel(node *root, int k){
            if (root == NULL)
                return 0;

            if (k == 0){
                return root->data;
            }
            queue <node*> q;
            q.push(root);
            q.push(NULL);

            int level = 0;
            int sum = 0;
            while(!q.empty()){
                node *temp = q.front();
                q.pop();
                if (temp!=NULL){
                    if (level == k){
                        sum += temp->data;
                    }
                    if (temp->left){
                        q.push(temp->left);
                    }
                    if (temp->right){
                        q.push(temp->right);
                    }
                }
                else if (!q.empty()){
                    q.push(NULL);
                    level++;
                }
            }
            return sum;
        }

        int countNode(node *root){
            if (!root){
                return 0;
            }
            return countNode(root->left) + countNode(root->right) + 1;
        }

        int sumNodes(node *root){
            if (!root){
                return 0;
            }

            return sumNodes(root->left) + sumNodes(root->right) + root->data;
        }

        int height(node *root){
            if (!root){
                return 0;
            }

            int lheight = height(root->left);
            int rheight = height(root->right);
            
            return max(lheight, rheight) + 1;
        } 
};

int main(){
    // key: 2y3ly4ry6lly8rly7lry9rry10rrl
    // key: 1y2ly3ry4lly5lry6rly7rrn
    node *root = NULL;
    tree ob;
    int ch;
    do
    {
        cout<<"1.Create"<<endl;
        cout<<"2.Inorder display"<<endl;
        cout<<"3.Preorder display"<<endl;
        cout<<"4.Postorder display"<<endl;
        cout<<"5.level order display"<<endl;
        cout<<"6.sum at kth level"<<endl;
        cout<<"7.count nodes"<<endl;
        cout<<"8.sum of nodes"<<endl;
        cout<<"9.height of tree"<<endl;
        cin>>ch;

        switch (ch)
        {
            case 1:
                root = ob.create(root);
                break;

            case 2:
                cout<<"Inorder Display : "<<endl;
                ob.inOrder(root);
                cout<<endl;
                break;

            case 3:
                cout<<"Preorder Display : "<<endl;
                ob.preOrder(root);
                cout<<endl;
                break;

            case 4:
                cout<<"Postorder Display : "<<endl;
                ob.postOrder(root);
                cout<<endl;
                break;

            case 5:
                cout<<"LevelOrder Display : "<<endl;
                ob.levelOrder(root);
                cout<<endl;
                break;

            case 6:
                int x;
                cout<<"Enter k : ";
                cin>>x;
                cout<<endl<<"Sum at kth level : "<<ob.sumAtKthLevel(root, x)<<endl;
                cout<<endl;
                break;

            case 7:
                cout<<"Number of nodes : "<<ob.countNode(root)<<endl;
                break;

            case 8:
                cout<<"sum of nodes : "<<ob.sumNodes(root)<<endl;
                break;

            case 9:
                cout<<"height tree : "<<ob.height(root)<<endl;
                break;
        }
    } while (ch<10);
    
    return 0;
}