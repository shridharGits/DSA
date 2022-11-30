#include<bits/stdc++.h>
using namespace std;

int t[10] = {0,0,0,0,0,0,0,0,0,0};
int solve(int arr[], int n){
    int mul = 1;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            zeroCount++;
        }
        else{
            mul = mul*arr[i];
        }
    }
    string ans = "";
    if(zeroCount == 1){
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 0){
                ans+=to_string(mul);
                t[i] = mul;
            }
            else{
                ans+='0';
                t[i] = 0;
            }
            if(i!=n-1)
                ans+='-';
        }
        
    }
    else if(zeroCount>1){
        for (int i = 0; i < n; i++)
        {
            ans+='0';
            t[i] = 0;
            if(i!=n-1)
                ans+='-';
        }   
    }
    else{
        for (int i = 0; i < n; i++)
        {
            ans+=to_string(mul/arr[i]);
            t[i] = mul/arr[i];
            if(i!=n-1)
                ans+='-';
        }
    }
    return t[0];
}
int main(){
    int arr[] = {3,1,2,6};
    int n = 4;
    solve(arr, n);
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans+=to_string(t[i]);
        if(i != n-1){
            ans+='-';
        }
    }
    
    
    
    
    return 0;
}