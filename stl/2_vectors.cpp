#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    //1
    vector<int> a;
    a.push_back(1);      // {1}
    a.emplace_back(2);   // {1,2}  // both are same
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    
    // 2 
    vector <pair<int, int>> u;
    u.push_back({1,2});
    u.emplace_back(3,4);
    // cout<<u[1].first<<endl;
    // cout<<u[1].second<<endl;

    // 3
    vector<int> v(5); // {0,0,0,0,0}
    vector<int> v1(5, 100); // {100,100,100,100,100}

    // 4
    vector<int> c = {1,2,3,4,5};
    vector<int> :: iterator it = c.begin();   // in short i = 0
    it++;
    // cout<<*(it)<<endl;

    // 5 erase function
    // c.erase(c.begin()); // 2,3,4,5
    c.erase(c.begin()+2, c.begin()+4);   // 1,2,5

    // 6 insert function
    c.insert(c.begin(), 300); // {300,1,2,3,4,5}
    c.insert(c.begin()+1, 2, 300); // {300,2,2,1,3,4,5}
}

int main(){
    explainVector();
    return 0;
}