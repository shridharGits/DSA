#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node *makeNode(int data){
    node *newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}


node *createNode(node *head, int data){
    node *newnode, *temp;
    newnode = makeNode(data);
    if (head == NULL){
        head = newnode;
        temp = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
    return head;
}

node *addAtBeg(node *head, int data){
    node *newnode = makeNode(data);
    newnode->next = head;
    head = newnode;
    return head;
}

node *addAtEnd(node *head, int data){
    node *newnode = makeNode(data);
    node *temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

node *addAtPos(node *head, int data, int pos){
    node *newnode = makeNode(data);
    int i = 1;
    node *temp = head;
    while(i<pos){
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

void display(node *head){
    node *temp = head;
    while(temp){
        cout<<temp->data<<"    ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node *head = NULL;
    head = createNode(head, 10);
    head = createNode(head, 30);
    head = createNode(head, 20);
    head = createNode(head, 50);
    head = createNode(head, 40);
    cout<<"SLL"<<endl;
    display(head);

    cout<<"Add at beg"<<endl;
    head = addAtBeg(head, 70);
    display(head);

    cout<<"Add at end"<<endl;
    head = addAtEnd(head, 100);
    display(head);

    cout<<"Add at pos"<<endl;
    head = addAtPos(head, 200, 3);
    display(head);


    return 0;
}