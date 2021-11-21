#include<bits/stdc++.h>
using namespace std;

void nextGreaterFrequencyElement(int arr [], int n){
    int hash[100];
    vector<pair<int, int>>v;
    stack<pair<int, int>> s;
    vector<int> ans;
    for (int i = 0; i < 100; i++)
    {
        hash[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        v.push_back({hash[arr[i]], arr[i]});
    }

    for (int i = n-1; i >= 0; i--)
    {
        if (s.empty()){
            ans.push_back(-1);
        }
        else if (!s.empty() && (s.top().first > v[i].first)){
            ans.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first <= v[i].first){
            while(!s.empty() && s.top().first <= v[i].first){
                s.pop();
            }
            if (s.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top().second);
            }
        }

        s.push({v[i].first, v[i].second});
    }
    
    for (int i = n-1; i >=0; i--)
    {
        cout<<ans[i]<<"    ";
    }
    
    
}

int main(){
    int arr[] = {1, 1, 1, 2, 2, 2, 2, 11, 3, 3};
    nextGreaterFrequencyElement(arr, 10);
    return 0;
}