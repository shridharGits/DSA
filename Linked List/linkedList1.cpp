#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node *makenode(){
    node *newnode = new node;
    cout<<"Enter the data : ";
    cin>>newnode->data;
    newnode->next = NULL;
    return newnode;
}

node *createnode(node *head){
    node *newnode, *temp;
    char ch = 'y';
    do{
        newnode = makenode();
        if (head == NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp ->next = newnode;
            temp = newnode;
        }
        cout<<"do you want to continue : ";
        cin>>ch;
    }while(ch == 'y');
    return head;
}

node *addAtBeg(node *head){
    node *temp = head;
    node *newnode;
    newnode = makenode();
    newnode->next = head;
    head = newnode;
    return head;
}

node *addAtEnd(node *head){
    node *temp = head;
    node *newnode;
    newnode = makenode();
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

node *addAtMiddle(node *head){
    int pos;
    node *temp = head;
    cout<<"Enter at which pos : ";
    cin>>pos;
    node *newnode = makenode();
    int c = 0;
    while (c<pos-2)
    {
        temp = temp->next;
        c++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

node *delAtBeg(node *head){
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

node *delAtEnd(node *head){
    node *temp = head;
    while (temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}

node *delAtPos(node *head){
    node *temp = head;
    node *prevnode;
    int pos;
    cout<<"Enter index at which element is to be deleted : ";
    cin>>pos;
    int c = 0;
    while(c<pos-1){
        prevnode = temp;
        temp = temp->next;
        c++;
    }
    prevnode->next = temp->next;
    delete temp;
    return head;
}

void middlenodeHead(node *head){
    node *temp = head;
    int c = 0;
    while (temp!=NULL)
    {
        c++;
        temp = temp->next;
    }
    // cout<<c<<endl;

    temp = head;
    int k = ceil(c/2)-1;
    while(k--){
        temp = temp->next;
    }
    node *middle = temp->next;
    temp->next = temp->next->next;
    middle->next = head;
    head = middle;
    temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"    ";
        temp = temp->next;
    }
    
}

node *reverse(node *head){
    node *prevnode, *nextnode, *currentnode;
    prevnode = NULL;
    currentnode = head;

    while(currentnode!=NULL){
        nextnode = currentnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    return prevnode;
}

node *blockWiseReverse(node *head, int k, int d){
    node *temp = head;
    node *temp2 = head;
        node *currentnode = head;
        node *prevnode = temp2;
        node *nextnode;
    while (temp!=NULL)
    {
    // cout<<2<<endl;
        int c = k;
        while (c--)
        {
            nextnode = currentnode->next;
            currentnode->next = prevnode;
            prevnode = currentnode;
            currentnode = nextnode;
        }
        prevnode->next = currentnode;
        temp = currentnode;
    }

    return head;
}

// bool isPalindrome(node *head)
//     {
//         node *temp = head;
//         node *t;
//         node *newHead = NULL;
//         while(temp!=NULL){
//             node *newnode = new node;
//             node->data= temp->data;
//             if (newHead == NULL){
//                 newHead = newnode;
//                 t = newnode;
//             }
//             else{
//                 t->next = newnode;
//                 t = newnode;
//             }
//             temp = temp->next;
//         }
//         node *prevnode = NULL;
//         node *currentnode = head;
//         node *nextnode;
//         while(currentnode!=NULL){
//             nextnode = currentnode->next;
//             currentnode->next = prevnode;
//             prevnode=currentnode;
//             currentnode = nextnode;
//         }
//         node *p = newHead;
//         node *q = prevnode;
//         while(p && q){
//             if (p->data!=q->data){
//                 return 0;
//             }
//             p = p->next;
//             q = q->next;
//         }
//         return 1;
//     }

node *removeDuplicateSorted(node *head)
{
    node *temp = head;
    node *prev = head;
    if (head == NULL || head->next == NULL)
        return head;

    while(prev->next!=NULL){
        while(temp!=NULL && prev->data == temp->data){
            temp = temp->next;
        }
        if (temp == NULL){
            prev->next = NULL;
            break;
        }
        prev->next = temp;
        prev = temp;
        // temp = temp->next;
    }

    return head;
}

// node *removeDuplicateUnsorted(node *head){
    
// }

void swapnodes(node *head, int x, int y){
    node *prevx = NULL, *currentx = head;
    while (currentx && currentx->data!=x)
    {
        prevx = currentx;
        currentx = currentx->next;
    }
    node *prevy = NULL, *currenty = head;
    while (currenty && currenty->data!=y)
    {
        prevy = currenty;
        currenty = currenty->next;
    }

    if (prevx!=NULL){
        prevx->next = currenty;
    }
    else{
        head = currenty;
    }
    if (prevy!=NULL){
        prevy->next = currentx;
    }
    else{
        head = currentx;
    }

    node *temp = currenty->next;
    currenty->next = currentx->next;
    currentx->next = temp;
}

// node *pairWiseSwap(node *head){
//     node *prev = head;
//     node *newHead = head->next;
//     node *curr;
//     node *temp;
//     while (1)
//     {
//         curr = prev->next;
//         temp = curr->next;
//         curr->next = prev;
//         if (!temp || !temp->next){
//             prev->next = NULL;
//             break;
//         }
//         prev->next = temp->next;
//         prev = temp;
//     }
    
//     return newHead;
// }

node *moveLastToFirst(node *head){
    node *temp = head;
    node *newHead;
    while (temp->next->next)
    {
        temp = temp->next;
    }

    temp->next->next = head;
    head = temp->next;
    temp->next = NULL;
    return head;
}

node *intersection(node *h1, node *h2){
    node *p = h1;
    node *newHead = NULL;
    node *temp;
    while (p)
    {
        node *q = h2;
        while (q)
        {
            if (p->data == q->data){
                node *newnode = new node();
                newnode->data = p->data;
                newnode->next = NULL;
                if (newHead == NULL){
                    newHead = newnode;
                    temp = newnode;
                }
                else{
                    temp->next = newnode;
                    temp = newnode;
                }
                break;
            }
            q = q->next;
        }
        p = p->next;
    }
    return newHead;
}

// Intersection point in a y shaped linked list
int intersectPoint(node* h1, node* h2)
{
    int size1 = 0;
    int size2 = 0;
    node *p = h1;
    node *q = h2;
    int size = 0;
    while(p){
        size1++;
        p = p->next;
    }
    while(q){
        size2++;
        q = q->next;
    }
    node *temp;
    node *a = h1;
    node *b = h2;
    if (size2>size1){
        size = size2-size1;
        temp = h2;
        
        while(size){
            size--;
            temp = temp->next;
        }
        while(a && temp){
            if (a->next == temp->next){
                return a->next->data;
            }
            a = a->next;
            temp = temp->next;
        }
    }
    else{
        size = size1-size2;
        temp = h1;
        while(size){
            size--;
            temp = temp->next;
        }
        while(b && temp){
            if (b->next == temp->next){
                return b->next->data;
            }
            b = b->next;
            temp = temp->next;
        }
    }
    return -1;
}

node *reverseInGrp(node *head, int k){
    int c = 0;
    node *prev, *curr, *nextnode;
    prev = NULL;
    curr = head;
    while (curr && c<k)
    {   
        nextnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;
        c++;
    }
    if (nextnode){
        head->next = reverseInGrp(nextnode, k);
    }
    return prev;
}

node* divide(node *head, int k){
        if (head == NULL || head->next == NULL){
            return head;
        }
        node *temp = head;
        node *evenHead = NULL;
        node *oddHead = NULL;
        node *e;
        node *o;
        while(temp){
            node *newnode = new node;
            newnode->data = temp->data;
            newnode->next = NULL;
            if (temp->data%2 == 0){
                if (evenHead == NULL){
                    evenHead = newnode;
                    e = newnode;
                }
                else{
                    e->next = newnode;
                    e = newnode;
                }
            }
            else if (temp->data%2 != 0){
                if (oddHead == NULL){
                    oddHead = newnode;
                    o = newnode;
                }
                else{
                    o->next = newnode;
                    o = newnode;
                }
            }
            temp = temp->next;
        }
        if (evenHead == NULL){
            return oddHead;
        }
        else{
            e->next = oddHead;
            return evenHead;
        }
    }

void display(node *head){
    node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"    ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    cout<<"SSL"<<endl;
    node *head1 = NULL, *head2 = NULL, *head = NULL;
    head1 = createnode(head1);
    // head2 = createnode(head2);
    display(head1);
    // display(head2);

    // add at beginning
    // cout<<"Add At Beg"<<endl;
    // head = addAtBeg(head);
    // display(head);

    // // add at end
    // cout<<"Add At End"<<endl;
    // head = addAtEnd(head);
    // display(head);

    // // add at pos using index
    // cout<<"Add At pos (index)"<<endl;
    // head = addAtMiddle(head);
    // display(head);


    // // del at beg
    // cout<<"Del At Beg"<<endl;
    // head = delAtBeg(head);
    // display(head);

    // // del at end
    // cout<<"Del At End"<<endl;
    // head = delAtEnd(head);
    // display(head);

    // del at pos
    // cout<<"Del At Pos"<<endl;
    // head = delAtPos(head);
    // display(head);

    // middlenodeHead(head);
    // head = reverse(head);
    // head = blockWiseReverse(head, 3, 1);
    // head = removeDuplicateSorted(head);
    // head = removeDuplicateUnsorted(head);
    // swapnodes(head, 2, 4);
    // head = moveLastToFirst(head1);
    // head = intersection(head1, head2);
    // head = reverseInGrp(head1, 4);
    head = divide(head1, 4);
    display(head);
    return 0;
}