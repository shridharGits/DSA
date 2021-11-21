#include<bits/stdc++.h>
using namespace std;

void kthLargest(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>> minH;

    for (int i = 0; i < n; i++)
    {
        minH.push(arr[i]);
        if(minH.size() > k){
            minH.pop();
        }
    }
    
    for (int i = 0; i < k; i++)
    {
        cout<<minH.top()<<endl;
        minH.pop();
    }   
}

int main(){
    int arr[] = {5,1,2,3,9,4,12, 15};
    kthLargest(arr,8,3);
    return 0;
}