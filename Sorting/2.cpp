#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left = NULL;
    Node *right = NULL;

    
};
map<int,int> m;
int solve(Node *root){
    if(!root){
        return 0;
    }
    if(m.find(root->data)!=m.end()){
        return 0;
    }
    int left = solve(root->left);
    int right = solve(root->right);
    return max(left, right)+1;
}

int cheat(int n, int **input2, int input3, int input4[]){
    
    for (int i = 0; i < input3; i++)
    {
        m[input4[i]]++;
    }

    while(!q.empty()){
        ht++;
        ans= max(ans, ht);
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *temp = q.front();
            q.pop();
            if(temp->left && m.find(temp->data)==m.end()){
                q.push(temp->left);
            }
            if(temp->right && m.find(temp->data)==m.end()){
                q.push(temp->right);
            }
        }
        
    }
    return ans-1;
}
int cheat(int n, vector<vector<Node*>> &input2, int input3, vector<int> &input4){
    
    for (int i = 0; i < input3; i++)
    {
        m[input4[i]]++;
    }

    // int ans = solve();

    queue<Node*> q;
    q.push(input2[0][0]);
    int ans = 0;
    int ht = 0;
    while(!q.empty()){
        ht++;
        ans= max(ans, ht);
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *temp = q.front();
            q.pop();
            if(temp->left && m.find(temp->data)==m.end()){
                q.push(temp->left);
            }
            if(temp->right && m.find(temp->data)==m.end()){
                q.push(temp->right);
            }
        }
        
    }
    return ans-1;
}

void inorder(Node *root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    Node *root = new Node();
    root->data = 1;
    // cout<<root->data;
    
    Node *n2 = new Node();
    Node *n3 = new Node();
    Node *n4 = new Node();
    Node *n5 = new Node();
    n2->data = 2;
    n3->data = 3;
    n4->data = 4;
    n5->data = 5;

    root->left = n2;
    root->right = n3;

    n3->left = n4;
    n4->right = n5;

    vector<vector<Node*>> v = {{root,n2}, {root,n3}, {n3,n4}, {n3, n5}};
    int input3 = 1;
    vector<int> input4 = {3};
    cout<<cheat(5, v, input3, input4);
    // inorder(root);



    return 0;
}