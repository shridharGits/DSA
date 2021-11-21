#include<bits/stdc++.h>
using namespace std;

void explainSets(){
    // sets store elements in sorted order
    // but only stores unique elements

    set <int> s;
    s.insert(1);    // {1}
    s.insert(2);    // {1, 2}
    s.insert(2);    // {1, 2}
    s.insert(4);    // {1, 2, 4}
    s.insert(3);    // {1, 2, 3, 4}

    auto it = s.find(7);
    cout<<*it;
    auto it = s.find(3);
    cout<<*it;

    s.erase(4);     // earses 4 // takes logarithmic time

    int count = s.count(1); // to check of element exist or not
}

int main(){
    explainSets();
    return 0;
}