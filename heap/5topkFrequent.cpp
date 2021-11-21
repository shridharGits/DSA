#include<bits/stdc++.h>
using namespace std;

void topkFrequent(int arr[], int n, int k){
    unordered_map <int,int> mp;
    priority_queue <pair <int, int>, vector<pair <int, int>>, greater<pair <int, int>>> m;
    for (int i = 0; i < n; i++)
    {
       mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        m.push({it.second, it.first});
        if(m.size()>k)
            m.pop();
        // cout<<it.first<<" ----> "<<it.second<<endl;
    }
    while (!m.empty())
    {
        cout<<m.top().second<<endl;
        m.pop();
    }
    
    
}

int main(){
    int arr[] = {1,1,1,3,2,2,4};
    topkFrequent(arr,7,2);
    return 0;
}