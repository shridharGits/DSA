#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n){
    int t[n];
    t[0] = arr[0];
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(i!=j){
                if(arr[i]>arr[j]){
                    t[i] = arr[i] + t[j];
                    ans = max(t[i], ans);
                }
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<t[i]<<"   ";
    }
    cout<<endl;
    
    return ans;
    
}

int main(){
    int arr[] = {1,101,2,3,100};
    cout<<solve(arr,5);
    return 0;
}