#include<bits/stdc++.h>
using namespace std;

void frequencySort(int arr[], int n){
    unordered_map <int,int> mp;
    priority_queue <pair <int,int>> m;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        m.push({it.second, it.first});
    }
    while(!m.empty())
    {
        for (int i = 0; i < m.top().first; i++)
        {
            cout<<m.top().second<<"    ";
        }
        
        m.pop();
    }
    
    
}

int main(){
    int arr[] = {1,5,1,2,5,1,4,3,4,2,5,1};
    frequencySort(arr, 12);
    return 0;
}