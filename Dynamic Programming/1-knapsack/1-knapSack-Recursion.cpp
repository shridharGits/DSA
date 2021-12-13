#include<bits/stdc++.h>
using namespace std;

// Recursion
int knapSackR(int W, int wt[], int val[], int n) 
{ 
    if(W == 0 || n == 0){
        return 0;
    }
    if(wt[n-1]<=W){
        return max(val[n-1] + knapSackR(W-wt[n-1], wt, val, n-1) , knapSackR(W,wt,val,n-1));
    }
    else{
        return knapSackR(W,wt,val,n-1);
    }
}

// Memoization
int dp[1002][1002] = {{0}};

int knapSackM(int W, int wt[], int val[], int n) 
{ 
    if(W == 0 || n == 0){
        return 0;
    }
    if(dp[n][W] != 0){
        return dp[n][W];
    }
    if(wt[n-1]<=W){
        dp[n][W] = max(val[n-1] + knapSackM(W-wt[n-1], wt, val, n-1) , knapSackM(W,wt,val,n-1) );
        return dp[n][W];
    }
    else{
        dp[n][W] = knapSackM(W,wt,val,n-1);
        return dp[n][W];
    }
}

// Bottom up Approach
int knapSack(int W, int wt[], int val[], int n) 
{ 
    int dp[n+1][W+1];
    for(int i = 0; i<n+1; i++){
        for(int j = 0; j<W+1; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else{
                if(wt[i-1]<=j){
                    dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    }
    return dp[n][W];
}

int main(){
    int W = 4;
    int n = 3;
    int val[] = {1,2,3};    
    int wt[] = {4,5,1};

    // Recursion
    // cout<<knapSackR(W,wt,val,n);

    // Memoization
    cout<<knapSackM(W,wt,val,n);
   
    return 0;
}