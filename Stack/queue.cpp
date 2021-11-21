#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node *front = NULL;
node *rear = NULL;

class queue{
    public:
        void enqueue(int x){
            node *newnode = new node();
            newnode->data = x;
            newnode->next = NULL;
            if (rear == NULL){
                rear = newnode;
                front = newnode;
            }
            else{
                rear->next = newnode;
                rear = newnode;
                newnode->next = front;
            }
        }

        void dequeue(){
            if (front){
                node *t = front;
                front = front->next;
                rear->next = front;
                delete t;
            }
            else
                return;
        }

        void display(){
            node *t = front;
            while(t->next!=front){
                cout<<t->data<<"    ";
                t = t->next;
            }
            cout<<t->data<<"    ";
            cout<<endl;
        }
};


int main(){
    queue q;
    q.enqueue(5);  
    q.enqueue(1);  
    q.enqueue(2);  
    q.enqueue(4);

    q.display();  

    q.dequeue();
    q.display();
    return 0;
}