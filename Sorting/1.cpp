#include<bits/stdc++.h>
using namespace std;

int solve(int n, int k, int price[], int volume[], vector<vector<int>> &dp){
    if(n == 0){
      if(price[n]<=k){
        return volume[n];
      }
      else{
        return 0;
      }
    }
  if(dp[n][k]!=-1){
    return dp[n][k];
  }
  int take = 0, notTake = 0;
  notTake = solve(n-1, k, price, volume, dp);
  if(k>=price[n]){
    take = solve(n-1, k-price[n], price, volume, dp)+volume[n];
  }

  return dp[n][k] = max(take, notTake);
}

int main(){
  int n;
  cin>>n;
  int k;
  cin>>k;

  int price[n];
  int volume[n];
  for (int i = 0; i < n; i++)
  {
    cin>>price[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin>>volume[i];
  }
  vector<vector<int>> dp(n+1, vector<int> (k+1, -1));

  cout<<solve(n-1, k, price, volume, dp);
  
  

  return 0;
} 