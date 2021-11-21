#include<bits/stdc++.h>
using namespace std;

void ksmallest(int arr[], int n, int k){
    priority_queue <int> maxH;

    for (int i = 0; i < n; i++)
    {
        maxH.push(arr[i]);
        if(maxH.size() > k){
            maxH.pop();
        }
    }
    cout<<maxH.top();
}

int main(){
    int arr[]={4,9,2,5,3,7,1};
    ksmallest(arr, 7, 5);
    return 0;
}