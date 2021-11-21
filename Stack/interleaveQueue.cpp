#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct node{
    int data;
    node *next;
};
node *front = NULL;
node *rear = NULL;

class queueue{
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
            }
        }

        void dequeue(){
            if (front){
                node *t = front;
                front= front->next;
                delete t;
            }
            else{
                return;
            }
        }

        void interleave(int n){
            queue<int> a;
            queue<int> b;
            node *c = front->next;
            front->next = NULL;
            int half = (n-2)/2;

            int i = 0;
            while(i<half){
                a.push(c->data);
                c = c->next;
                i++;
            }
            int j = 0;
            while(j<half){
                b.push(c->data);
                c = c->next;
                j++;
            }
            

            node *t;
            while(!a.empty() && !b.empty()){
                node *newnode = new node();
                newnode->data = b.front();
                b.pop();
                newnode->next = rear;
                if (front->next == NULL){
                    front->next = newnode;
                    t = newnode;
                }
                else{
                    t->next = newnode;
                    t = newnode;
                }
                node *newnode2 = new node();
                newnode2->data = a.front();
                newnode2->next = rear;
                a.pop();
                t->next = newnode2;
                t = newnode2;
            }
            
        }
        void display(){
            node *t = front;
            while(t){
                cout<<t->data<<"    ";
                t = t->next;
            }
            cout<<endl;
        }
};

int main(){
    queueue q;
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(14);
    q.enqueue(15);
    q.enqueue(16);
    q.enqueue(17);
    q.enqueue(18);
    q.enqueue(19);
    q.enqueue(20);
    q.display();


    //11 12 13 14 15 16 17 18 19 20
    // Output : 11 16 12 17 13 18 14 19 15 20
    q.interleave(10);
    q.display();
    
    return 0;
}