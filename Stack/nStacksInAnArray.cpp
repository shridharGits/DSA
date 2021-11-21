#include<iostream>
using namespace std;

class kstacks{
    public:
        int arr[20];
        int n = 20;
        kstacks(){
            for (int i = 0; i < 20; i++)
            {
                arr[i] = 0;
            }
        }
        
        int k = 4;
        int top1 = -1;
        int top2 = n/k-1;
        int top3 = 2*(n/k)-1;
        int top4 = 3*(n/k)-1;
        
        void push1(int x){
            if (top1 < n/k){
                top1++;
                arr[top1] = x;
            }
            else{
                cout<<"stack 1 overflow"<<endl;
            }
            //display();
        }
        void push2(int x){
            if (top2 < (2*(n/k))){
                top2++;
                arr[top2] = x;
            }
            else{
                cout<<"stack 2 overflow"<<endl;
            }
            //display();
        }
        void push3(int x){
            if (top3 < (3*(n/k))){
                top3++;
                arr[top3] = x;
            }
            else{
                cout<<"stack 3 overflow"<<endl;
            }
            // //display();
        }
        void push4(int x){
            if (top4 < (4*(n/k))){
                top4++;
                arr[top4] = x;
            }
            else{
                cout<<"stack 4 overflow"<<endl;
            }
            // //display();
        }

        void pop1(){
            if (top1>=0){
                cout<<"popped element : "<<arr[top1]<<endl;
                arr[top1] = 0;
                top1--;
            }
            else{
                cout<<"stack 1 underflow "<<endl;
            }
            // //display();
        }
        void pop2(){
            if (top2>=n/k){
                cout<<"popped element : "<<arr[top2]<<endl;
                arr[top2] = 0;
                top2--;
            }
            else{
                cout<<"stack 2 underflow "<<endl;
            }
            // //display();
        }
        void pop3(){
            if (top3>= (2*(n/k))){
                cout<<"popped element : "<<arr[top3]<<endl;
                arr[top3] = 0;
                top3--;
            }
            else{
                cout<<"stack 3 underflow "<<endl;
            }
            // //display();
        }
        void pop4(){
            if (top4>(3*(n/k))){
                cout<<"popped element : "<<arr[top3]<<endl;
                arr[top4] = 0;
                top3--;
            }
            else{
                cout<<"stack 3 underflow "<<endl;
            }
            // //display();
        }

        void display(){
                for (int j = 0; j < 20; j++)
                {
                    cout<<arr[j]<<"    ";
                }
                cout<<endl;
        }

};


int main(){
    kstacks s;

    s.push1(4);
    s.pop1();
    s.push1(4);
    s.push1(4);
    s.push1(4);
    s.push2(6);
    s.pop2();

    s.display();
    return 0;
}