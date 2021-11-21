#include<bits/stdc++.h>
using namespace std;

stack <char> s;
void insertAtEnd(char x){
    if (s.empty()){
        s.push(x);
    }
    else{
        char a = s.top();
        s.pop();
        insertAtEnd(x);
        s.push(a);
    }
}

void reverse(){
    if(!s.empty()){
        char x = s.top();
        s.pop();
        reverse();
        insertAtEnd(x);
    }
}

int main(){
    stack <int> s;
    s.push(10);
    s.push(30);
    s.push(40);
    s.push(20);

    // 20 40 30 10
    // 40 30 20 10
    reverse();

    while(!s.empty()){
        cout<<s.top()<<"    ";
        s.pop();
    }
    return 0;
}