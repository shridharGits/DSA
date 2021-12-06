#include<bits/stdc++.h>
using namespace std;

int coinChange(int coin[], int n, int sum){
    int t[n+1][sum+1];

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if(i == 0){
                t[0][j] = 0;
            }
            else if(j == 0){
                t[i][0] = 1;
            }
            else{
                t[0][0] = 1;
                if(coin[i-1]<=j){
                    t[i][j] = t[i][j-coin[i-1]] + t[i-1][j];
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
    return t[n][sum];
}

int main(){
    int coin[] = {1,2,3};
    int sum = 5;
    cout<<coinChange(coin, 3, sum);
    return 0;
}