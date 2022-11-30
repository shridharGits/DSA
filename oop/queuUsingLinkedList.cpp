#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

class Queue{
    public:
    Node *front = NULL;
    Node *back = NULL;

    void push(int data){
        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = NULL;
        if(!front){
            front = newnode;
            back = newnode;
        }
        else{
            back->next = newnode;
            back = newnode;
        }
    }

    int pop(){
        if(front){
            int x = front->data;
            front = front->next;
            return x;
        }
        return -1;
    }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);


    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl ;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}