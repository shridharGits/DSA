#include<bits/stdc++.h>
using namespace std;

// Recursion + Memorization [TC: O(n) SC: O(n)+O(n)]
int f(int n, vector<int> &dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }

    return dp[n] = f(n-1,dp) + f(n-2,dp);
}

// Tabulation [TC: O(n) SC: O(n)]
int fib(int n){
    vector<int> dp(n+1,-1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

// Optimized Tabulation without extra space [TC: O(n) SC: O(1)]
int fibonacci(int n){
    int prev2 = 0;
    int prev = 1;
    int ans;
    for (int i = 2; i <= n; i++)
    {
        ans = prev2+prev;
        prev2 = prev;
        prev = ans; 
    }
    return ans;
}

int main(){
    int n = 10;
    vector<int> dp(n+1, -1);
    // cout<<f(n, dp);
    // cout<<fib(5);
    cout<<fibonacci(5);
    return 0;
}