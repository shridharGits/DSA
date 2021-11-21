#include<iostream>
using namespace std;

int main(){
    // o(n^2)
/*
node *removeDuplicateUnsorted(node *head){
node *p = head;
    while (p!=NULL)
    {
        node *q = p;
        while(q->next){
            if (p->data == q->next->data){
                if (q->next->next ==NULL){
                    q->next = NULL;
                    break;
                    }
                else{
                    q->next = q->next->next;
                }
            }
            else{
                q = q->next;
            }
        }
        p = p->next;
    }
    return head;
}
*/

    // o(n)
    /*
    
    Node * removeDuplicates( Node *head) 
    {
        map <int, int> m;
        Node *current = head;
        m[current->data] = 1;
        Node *prev = current;
        current = current->next;
        while(current){
            if (m[current->data]){
                prev->next = current->next;
                free(current);
            }
            else{
                m[current->data] = 1;
                prev = current;
            }
            current = prev->next;
        }
        return head;
    }
    */

    return 0;
}