#include<bits/stdc++.h>
using namespace std;

void explainPriorityQueue(){
    // 1 maximum heap
    // stores element in ascending order
    priority_queue <int> pq;

    pq.push(5);      // {5}
    pq.push(2);      // {5, 2}
    pq.push(8);      // {8, 5, 2}
    pq.emplace(10);      // {10, 8, 5, 2}

    // cout<<pq.top();     // prints 10

    pq.pop();

    // 2 minimum heap
    // stores element in descending order
    priority_queue <int, vector<int>, greater<int>> p;
    p.push(5);   //{5}
    p.push(2);   //{2, 5}
    p.push(8);   //{2, 5, 8}
    p.emplace(10);   //{2, 5, 8, 10}

    cout<<p.top();

}

int main(){
    explainPriorityQueue();
    return 0;
}