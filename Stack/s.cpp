#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class stack{
    public:
    node *top = NULL;
        void push(int x){
            node *newnode = new node();
            newnode->data = x;
            newnode->next = top;
            top = newnode;
        }

        int pop(){
            if (top == NULL){
                cout<<"stack underflow"<<endl;
                return -1;
            }
            else{
                node *temp = top;
                cout<<"popped data : "<<temp->data<<endl;
                top = top->next;
                delete temp;
                return 1;
            }
        }

        void display(){
            node *temp = top;
            while(temp){
                cout<<temp->data<<"    ";
                temp = temp->next;
            }
            cout<<endl;
        }

        void middle(){
            node *p = top;
            node *q =  top;

            while(q && q->next){
                p = p->next;
                q = q->next->next;
            }

            cout<<p->data<<endl;
        }
};

int main(){
    stack s;
    s.push(10);
    s.push(60);
    s.push(20);
    s.push(40);
    s.push(50);
    s.display();
    s.middle();
    return 0;
}