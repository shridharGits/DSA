#include<bits/stdc++.h>
using namespace std;

int coinChange(int arr[], int n, int sum){
    int t[n+1][sum+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if(i == 0){
                t[0][j] = INT_MAX-1;
            }  
            else if(j == 0){
                t[i][0] = 0;
            }
            else if(i == 1){
                if(j%arr[0] == 0){
                    t[i][j] = j/arr[0];
                }
                else{
                    t[i][j] = INT_MAX-1;
                }
            }
            else{
                t[0][0] = 0;
                if(arr[i-1]<=j){
                    t[i][j] = min(t[i][j-arr[i-1]] + 1, t[i-1][j]);
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
    }


    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            cout<<t[i][j]<<"    ";
        }
        cout<<endl;
    }

    if(t[n][sum] == INT_MAX-1){
        return -1;
    }
    return t[n][sum];
}

int main(){
    int coins[] = {2,3,5};
    int sum = 7;

    cout<<coinChange(coins,3,sum);
    return 0;
}