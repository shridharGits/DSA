#include<bits/stdc++.h>
using namespace std;

struct node{
    node *left;
    int data;
    node *right;
};

node *buildTree(string s, node *root){
    stack<node*> st;
    stack<char> bt;
    node *newnode;
    node *temp;
    bool f = false;
    for (int i = 0; i < s.length(); i++)
    {

        if(s[i] == '('){
            bt.push(s[i]);
        }
        else if((s[i]!= '(' && s[i]!=')')){
            node *newnode = new node;
            newnode->data = s[i];
            newnode->left = newnode->right = NULL;
            if(!root){
                root = newnode;
                
            }
            if(bt.top() == '('){

            }
        }
        
    }
};

int main(){
    string s = "4(2(3)(1))(6(5))";
    node *root = NULL;
    buildTree(s, root);
    return 0;
}

/* Input : "4(2(3)(1))(6(5))"
Output : 4 2 3 1 6 5
Explanation :
           4
         /   \
        2     6
       / \   / 
      3   1 5  

*/