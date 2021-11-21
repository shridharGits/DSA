#include<bits/stdc++.h>
using namespace std;

struct node{
    node *left;
    int data;
    node *right;
};

class tree{
    public:
    node *root;
    tree(){
        root = NULL;
    }
    node *create(){
        node *p, *t;
        queue <node*> q;
        int x;
        cout<<"Enter the root value : ";
        cin>>x;
        node *root = new node();
        root->data = x;
        root->left = root->right = NULL;
        q.push(root);
        while(!q.empty()){
            p = q.front();
            q.pop();
            cout<<"Enter the value of "<<p->data<<"'s left child : ";
            cin>>x;
            if (x == 40){
                break;
            }
            if (x!=-1){
                t = new node();
                t->data = x;
                t->left = t->right = NULL;
                p->left = t;
                q.push(t);
            }
            
            cout<<"Enter the value of "<<p->data<<"'s right child : ";
            cin>>x;
            if (x == 40){
                break;
            }
            if (x!=-1){
                t = new node();
                t->data = x;
                t->left = t->right = NULL;
                p->right = t;
                q.push(t);
            }
        }
    return root;
}

    void preorder(node *root){
        if (root){
            cout<<root->data<<"    ";
            preorder(root->left);
            preorder(root->right);
        }
    }
    void inorder(node *root){
        if (root){
            inorder(root->left);
            cout<<root->data<<"    ";
            inorder(root->right);
        }
    }
    void postorder(node *root){
        if (root){
            postorder(root->left);
            postorder(root->right);
            cout<<root->data<<"    ";
        }
    }

    void levelOrder(node *root){
        queue <node*> q;
        cout<<root->data<<"    ";
        q.push(root);

        while(!q.empty()){
            root = q.front();
            q.pop();

            if (root->left){
                cout<<root->left->data<<"    ";
                q.push(root->left);
            }
            if (root->right){
                cout<<root->right->data<<"    ";
                q.push(root->right);
            }
        }
        cout<<endl;
    }

    int count(node *root){
        if (root){
            return count(root->left) + count(root->right) + 1;
        }
        return 0;
    }

    int height(node *root){
        if (!root){
            return 0;
        }
        int x = height(root->left);
        int y = height(root->right);
        if (x>y){
            return x+1;
        }
        else{
            return y+1;
        }
    }

    void iterative_preorder(node *root){
        stack <node*> s;
        node *t;
        
        t = root;
        while (!s.empty() || t)
        {
            if (t){
                cout<<t->data<<"    ";
                s.push(t);
                t = t->left;
            }
            else{
                t = s.top();
                s.pop();
                t = t->right;
            }
        }
    }

    void iterative_inorder(node *t){
        stack <node*> s;
        while(!s.empty() || t){
            if (t){
                s.push(t);
                t = t->left;
            }
            else{
                t = s.top();
                s.pop();
                cout<<t->data<<"    ";
                t = t->right;
            }
        }
    }

    int count_leaf(node *t){
        if (t){
            int x = count_leaf(t->left);
            int y = count_leaf(t->right);
            if (!t->left && !t->right){
                return x+y+1;
            }
            else{
                return x+y;
            }
        }
        return 0;
    }

    node *mirrorify(node *root){
        if (!root){
            return NULL;
        }
        node *t = root->left;
        root->left = root->right;
        root->right = t;

        if (root->left){
            mirrorify(root->left);
        }
        if (root->right){
            mirrorify(root->right);
        }
        return root;
    }

    void f(node *root, int sum,int &maxSum){
        if (!root){
            return;
        }
        sum += root->data;
        if (!root->left && !root->right){
            return;
        }
        maxSum = max(maxSum,sum);
        
        f(root->left, sum, maxSum);
        f(root->right, sum, maxSum);
    }
    
    void printPath(node *root, vector<int> &v, vector<vector<int>> &p){
        if (!root){
            return;
        }
        
        v.push_back(root->data);
        if (!root->left && !root->right){
            p.push_back(v);
            v.pop_back();
            return;
        }
        printPath(root->left, v, p);
        printPath(root->right, v, p);
        v.pop_back();
    }

    node *merge(node *root, vector<int> v, int &i){
        if(!root && i<v.size()){
            cout<<"created  "<<v[i]<<endl;
            node *newnode = new node();
            newnode->data = v[i];
            i++;
            newnode->left = newnode->right = NULL;
            return newnode;
        }
        if(v[i]<root->data && i<v.size()){
            root->left = merge(root->left, v, i);
        }
        if(v[i] > root->data && i<v.size()){
            root->right = merge(root->right, v, i);
        }
        return root;
    }
};

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

int main(){
    tree t;
    node *root = NULL;
    root = t.create();
    cout<<endl;
    cout<<"Before : "<<endl;
    t.inorder(root);
    cout<<endl;
    // t.inorder(root);
    // cout<<endl;
    // t.levelOrder(root);
    // cout<<endl;
    // cout<<t.count(root);
    // cout<<endl;
    // cout<<t.height(root);
    // cout<<endl;
    // t.iterative_preorder(root);
    // t.iterative_inorder(root);

    // cout<<t.count_leaf(root);
    // cout<<endl;
    // root = t.mirrorify(root);
    // t.inorder(root);

    // int sum = 0;
    // int maxSum = -1;
    // t.f(root, sum, maxSum);
    // cout<<maxSum<<endl;





    // vector<int> v;
    // vector<vector<int>> p;
    // t.printPath(root,v,p);
    // int sum = 0;
    // for (int j = 0; j<p.size(); j++)
    // {
    //     string s = "";
    //     for (int i = 0; i < p[0].size(); i++)
    //     {
    //         s+=to_string(p[j][i]);
    //     }
    //     // cout<<s<<endl;
    //     stringstream n(s);
    //     int x = 0;
    //     n>>x;
    //     sum += binaryToDecimal(x);
    // }
    // cout<<sum;
    
    vector<int> v = {1,5,7,24,26,29};
        
    int i = 0;
    root = t.merge(root, v, i);
    cout<<endl;
    cout<<"After : "<<endl;
    t.inorder(root);
    cout<<endl;
    return 0;
}


// 1
//2 3
// 4 5 6 7

// enter your current city
// enter the city you wanna go
// show road

// 10 8 15 4 9 12 18 2 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1