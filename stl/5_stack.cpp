#include<bits/stdc++.h>
using namespace std;

void explainStack(){
    stack <int> s;
    s.push(1);      // {1}
    s.emplace(2);   // {2}
    cout<<s.top();
    s.pop();
}

int main(){
    explainStack();
    return 0;
}