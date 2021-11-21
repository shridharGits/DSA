#include<iostream>
#define n 5
using namespace std;

int arr[n];

class stack{
    public:
    int top;
    stack(){
        for (int i = 0; i < n; i++)
        {
            arr[i] = 0;
        }
        top = -1;
    }

    int isFull(){
        if (top == n-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    int isEmpty(){
        if (top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }

    void push(int x){
        if (isFull()){
            cout<<"Stack overflow"<<endl;;
        }
        else{
            top++;
            arr[top] = x;
        }
    }

    int pop(){
        if (isEmpty()){
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        else{
            int x = arr[top];
            arr[top] = 0;
            top--;
            return x;
        }
    }

    void display(){
        for (int i = top; i >= 0; i--)
        {
            cout<<arr[i]<<"    ";
        }
        cout<<endl;
    }

};

int main(){
    stack s;
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
                s.push(x);
                s.display();
                break;

            case 2:
                cout<<"Element popped is : "<<s.pop()<<endl;
                s.display();
                break;

            case 3: 
                s.display();
                break;
        };
    } while (ch<4);
    
    return 0;
}