#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

class Stack{
    public:
    Node *top =  NULL;

    void push(int data){
        Node *newnode = new Node();
        newnode->data= data;
        newnode->next = NULL;
        if(!top){
            top = newnode;
        }
        else{
            newnode->next = top;
            top = newnode;
        }
    }

    int pop(){
        if(top){
            int x = top->data;
            top = top->next;
            return x;
        }
        return -1;
    }
};

int main(){
    
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    return 0;
}