#include<bits/stdc++.h>
using namespace std;

void ksort(int arr[], int n, int k){
    priority_queue <int, vector<int>, greater<int>> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        m.push(arr[i]);
        if(m.size() > k){
            v.push_back(m.top());
            m.pop();
        }
    }

    while(!m.empty())
    {
        v.push_back(m.top());
        m.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<"   ";
    }

}

int main(){
    int arr[] = {6,5,3,2,8,10,9};
    ksort(arr,7,3);
    return 0;
}