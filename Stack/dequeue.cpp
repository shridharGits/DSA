#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
}; node *head = NULL;
node *tail = NULL;

class dequeue{
    public:
    void insert_at_end(int x){
        node *newnode = new node;
        node *temp;
        newnode->data = x;
        newnode->next = NULL;
        if (tail == NULL){
            tail = newnode;
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            tail = newnode;
            temp = newnode;
        }
    }

    void insert_at_start(int x){
        node *newnode = new node;
        newnode->data = x;
        newnode->next = NULL;
        if (head == NULL){
            head = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
    }

    void delete_at_end(){
        node *p = head;
        while(p->next->next){
            p = p->next;
        }
        tail = p;
        p->next =NULL;
    }

    void delete_at_start(){
        if (head){
            node *t = head;
            head = head->next;
            delete t;
        }
        else{
            return;
        }
    }

    void display(){
        node *t = head;
        while(t){
            cout<<t->data<<"    ";
            t = t->next;
        }
        cout<<endl;
    }
};

int main(){
    dequeue d;

    d.insert_at_end(5);
    d.insert_at_end(2);
    d.insert_at_end(9);
    d.insert_at_end(8);

    d.display();

    d.insert_at_start(20);
    d.insert_at_start(10);

    d.display();

    d.delete_at_end();
    d.delete_at_end();

    d.display();

    d.delete_at_start();
    d.delete_at_start();
    d.display();
    return 0;
}