#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *newNode(){
    node *newnode = new node;
    cout<<"Enter the data : ";
    cin>>newnode->data;
    newnode->next = NULL;
    return newnode;
}

class stack{
    public:
    node *top = NULL;

    node *push(int x){
        node *newnode = new node;
        newnode->data = x;
        newnode->next = top;
        top = newnode;
        return top;
    }

    node *pop(){
        if (top == NULL){
            cout<<"Stack underflow"<<endl;
            return NULL;
        }
        else{
            node *temp = top;
            int x = top->data;
            cout<<"popped data : "<<x<<endl;
            top = top->next;
            delete temp;
            return top;
        }
    }

    void display(node *head){
        node *temp = head;
        while (temp)
        {
            cout<<temp->data<<"    ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    stack s;
    node *head;
    int ch;
    do
    {
        cout<<"1.Push 2.Pop 3.Display"<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1:
                int x;
                cout<<"Enter element to be pushed : ";
                cin>>x;
                head = s.push(x);
                s.display(head);
                break;

            case 2:
                head = s.pop();
                s.display(head);
                break;

            case 3: 
                s.display(head);
                break;
        };
    } while (ch<4);
    
    return 0;
}