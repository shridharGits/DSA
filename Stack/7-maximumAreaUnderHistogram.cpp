#include<bits/stdc++.h>
using namespace std;

void maximumAreaUnderHistogram(int arr[], int n){
    vector<int> nsr;
    vector<int> nsl;
    stack<pair<int, int>> s;

    for (int i = n-1; i >= 0; i--)
    {
        if (s.empty()){
            nsr.push_back(n);
        }
        else if (!s.empty() && s.top().first < arr[i]){
            nsr.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first >= arr[i]){
            while (!s.empty() && s.top().first >= arr[i])
            {
                s.pop();
            }
            if (s.empty()){
                nsr.push_back(n);
            }
            else{
                nsr.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }

    
    while (!s.empty())
    {
        s.pop();
    }


    for (int i = 0; i < n; i++)
    {
        if (s.empty()){
            nsl.push_back(-1);
        }
        else if (!s.empty() && s.top().first < arr[i]){
            nsl.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first >= arr[i]){
            while (!s.empty() && s.top().first >= arr[i])
            {
                s.pop();
            }
            if (s.empty()){
                nsl.push_back(-1);
            }
            else {
                nsl.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    

    int maxArea = 0;
    // here we have subtracted nsr from nsl and nsr is in reverse so its written as (nsr[n-i-1])
    for (int i = 0; i < n; i++)
    {
        maxArea = max(maxArea, ((nsr[n-i-1]-nsl[i]-1)*arr[i]));
    }
    cout<<maxArea<<endl;
}

int main(){
    int arr[] = {6,2,5,4,5,1,6};
    maximumAreaUnderHistogram(arr,7);    
    return 0;
}