#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left, *right;
};
class tree
{
    node *root;

public:
    tree()
    {
        root = NULL;
    }
    void create();
    void pre(node *);
    void in(node *);
    void insert();
    void bfs();
    node *copy(node *);
    node *return_root()
    {
        return root;
    }
};

void tree::create()
{
    node *temp, *newnode;
    char side, op;
    do
    {
        newnode = new node;
        cout << "\n  Enter data=>";
        cin >> newnode->data;
        newnode->left = newnode->right = NULL;

        if (root == NULL) //For Root only or First Node
            root = newnode;
        else
        {
            temp = root;
            while (1)
            {
                cout << "\n  To the side L/R=>";
                cin >> side;
                if (side == 'l')
                {
                    if (temp->left == NULL)
                    {
                        temp->left = newnode;
                        break;
                    }
                    else
                        temp = temp->left;
                } //end of outer if
                else
                {
                    if (side == 'r')
                    {
                        if (temp->right == NULL)
                        {
                            temp->right = newnode;
                            break;
                        }
                        else
                            temp = temp->right;
                    } //end of outer if
                }     //end of outer else
            }         //end of while
        }             //end of outermost else
        cout << "\n  Do u want to continue=>";
        cin >> op;
    } while (op == 'y');
}

void tree::pre(node *temp)
{
    if (temp != NULL)
    {
        cout << "\t  " << temp->data;
        pre(temp->left);
        pre(temp->right);
    }
}
void tree::in(node *temp)
{
    if (temp != NULL)
    {
        in(temp->left);
        cout << "\t  " << temp->data;
        in(temp->right);
    }
}

void tree::insert()
{
    node *temp, *newnode;
    char side, op;
    newnode = new node;
    cout << "\n  Enter data=>";
    cin >> newnode->data;
    newnode->left = newnode->right = NULL;
    temp = root;
    while (1)
    {
        cout << "\n  To the side L/R=>";
        cin >> side;
        if (side == 'l')
        {
            if (temp->left == NULL)
            {
                temp->left = newnode;
                break;
            }
            else
                temp = temp->left;
        }
        else
        {
            if (side == 'r')
            {
                if (temp->right == NULL)
                {
                    temp->right = newnode;
                    break;
                }
                else
                    temp = temp->right;
            }
        }
    } //while
}

void tree::bfs()
{
    node *Queue[20], *temp = root;
    int Front = 0, Rear = 1, Level = 0, Count = 0, Leaf = 0;
    Queue[0] = temp; //Push in Q
    Queue[1] = NULL; //Push in Q
    cout << "\n  Level " << Level++ << "=>";
    do
    {
        temp = Queue[Front++]; //pop from Q
        if (temp == NULL)
        {
            Queue[++Rear] = NULL; //Push in Q
            cout << "\n  Level " << Level++ << "=>";
        }
        else
        {
            Count++; //Total Number of Nodes in a Tree
            cout << "\t" << temp->data;
            if (temp->left != NULL)
                Queue[++Rear] = temp->left; //Push in Q
            if (temp->right != NULL)
                Queue[++Rear] = temp->right; //Push in Q
            else if (temp->right == NULL && temp->left == NULL)
                Leaf++; //Number of Leaf Nodes
        }
    } while (Front < Rear);
    cout << "\n  Depth of Tree=> " << Level - 1;
    cout << "\n  Total No of Nodes=> " << Count;
    cout << "\n  Number of leaf Nodes=> " << Leaf;
}

node *tree::copy(node *root1)
{
    node *root2 = NULL;

    if (root1 != NULL)
    {
        root2 = new node;
        root2->data = root1->data;
        root2->left = copy(root1->left);
        root2->right = copy(root1->right);
    }
    return root2;
}

int main()
{
    tree ob;
    node *root1 = NULL;
    int ch;
    do
    {
        cout << "\n 1:Create & Display\n2:Insert\n3:Depth & Leaf nodes\n4:copy\n5:quit";
        cout << "\n Enter the choice=>";
        cin >> ch;
        switch (ch)
        {
        case 1:
            ob.create();
            ob.pre(ob.return_root());
            cout << "\n In order\n";
            ob.in(ob.return_root());
            break;
        case 2:
            ob.insert();
            ob.pre(ob.return_root());
            break;
        case 3:
            ob.bfs();
            break;
        case 4:
            root1 = ob.copy(ob.return_root());
            ob.pre(root1);
            break;
        }
    } while (ch < 5);
}
