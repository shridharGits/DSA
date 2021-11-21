#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    // 1
    pair <int, int> p = {1, 3};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    // 2
    pair <int, pair<int, int>> q = {1, {2,3}};
    // cout<<q.first<<endl;
    // cout<<q.second.first<<endl;
    // cout<<q.second.second<<endl;

    // 3
    pair <int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout<<arr[1].first<<endl;
    cout<<arr[1].second<<endl;
}

int main(){
    explainPair();
    return 0;
}