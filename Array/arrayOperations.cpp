#include<iostream>
using namespace std;

void insertAtPos(int a[], int pos, int ele){
    pos-=1;                         // to avoid 0 index based problem 
    for (int i = 9; i>=0; i--){
        if (i!=pos){
            a[i+1] = a[i];
        }
        else{
            a[i+1] = a[pos];
            a[pos] = ele;
            break;
        }
    }
        
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

void delAtpos(int a[], int pos){
    pos-=1;
    for (int j = pos; j < 10; j++){
        a[j] = a[j+1];
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<"  ";
    }
}

int main(){
    int a[10] = {1,2,3,5,6,7,8,9,10,11};
    insertAtPos(a,4,4);             //o(1)
    delAtpos(a,8);                  //o(1)
    return 0;
}