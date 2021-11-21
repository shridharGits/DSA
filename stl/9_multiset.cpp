#include<bits/stdc++.h>
using namespace std;

void explainMultiset(){
    // stores element in increasing order but it can also store same number multiple element
    multiset<int> m;
    m.insert(1);  // {1}
    m.insert(1);  // {1, 1}
    m.insert(1);  // {1, 1, 1}
    
    int count = m.count(1);

    m.erase(1);    // all 1s are erased

    m.erase(m.find(1));     // only single 1 is erased


}

int main(){
    explainMultiset();
    return 0;
}