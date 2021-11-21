#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

class tree{
    public:
        node *root;

        node *bst(node *root){
            node *newnode, *temp;
            char op, side;

            do
            {
                newnode = new node;
                cout<<"Enter the data : ";
                cin>>newnode->data;
                newnode->left = newnode->right = NULL;

                if (root == NULL){
                    root = newnode;
                }
                else{
                    temp = root;
                    while (1)
                    {
                        if (newnode->data < temp->data){
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
            } while (op == 'y');
            return root;
        }

        void inOrder(node *root){
            if (root == NULL)
                return;
            inOrder(root->left);
            cout<<root->data<<"    ";
            inOrder(root->right);
        }
};

int main(){
    node *root = NULL;
    tree ob;
    int ch;
    do
    {
        cout<<"1.Create"<<endl;
        cout<<"2.Inorder display"<<endl;
        cout<<"3.Preorder display"<<endl;
        cout<<"4.Postorder display"<<endl;
        cin>>ch;

        switch (ch)
        {
            case 1:
                root = ob.bst(root);
                break;

            case 2:
                cout<<"Inorder Display : "<<endl;
                ob.inOrder(root);
                cout<<endl;
                break;

            // case 3:
            //     cout<<"Preorder Display : "<<endl;
            //     ob.preOrder(root);
            //     cout<<endl;
            //     break;
            // case 4:
            //     cout<<"Postorder Display : "<<endl;
            //     ob.postOrder(root);
            //     cout<<endl;
            //     break;
        }
    } while (ch<5);
    return 0;
}