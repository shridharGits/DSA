#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue <int> q;
    q.push(1);      // {1}
    q.push(2);      // {1,2}
    q.emplace(3);   // {1,2,3}

    cout<<q.front();
    cout<<q.back();
}

int main(){
    explainQueue();
    return 0;
}