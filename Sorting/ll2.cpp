#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};
node *reverse(node *head){
    node *prev = NULL;
    node *nnode = head;
    node *curr = head;

    while(curr){
        nnode = nnode->next;
        curr->next = prev;
        prev = curr;
        curr = nnode;
    }
    return prev;
}
node *addTwo(node *l1, node *l2){
    l1 = reverse(l1);
    l2 = reverse(l2);

    node *newhead = NULL;
    node *temp = NULL;
    int sum = 0;
    int carry = 0;
    while(l1 && l2){
        sum =  l1->data + l2->data + carry;
        int sumToAdd = sum%10;
        carry = sum/10;
        node *newnode = new node();
        newnode->data= sumToAdd;
        if(!newhead){
            newhead = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    while(l1){
        sum = l1->data + carry;
        int sumToAdd = sum%10;
        carry = sum/10;
        node *newnode = new node();
        newnode->data= sumToAdd;
        if(!newhead){
            newhead = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        l1 = l1->next;
    }
    while(l2){
        sum = l2->data + carry;
        int sumToAdd = sum%10;
        carry = sum/10;
        node *newnode = new node();
        newnode->data= sumToAdd;
        if(!newhead){
            newhead = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        l2 = l2->next;
    }
    while(carry){
        int sumToAdd = carry;
        node *newnode = new node();
        newnode->data= sumToAdd;
        if(!newhead){
            newhead = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        carry = 0;
    }
    return newhead;
}

int main(){
    

    return 0;
}