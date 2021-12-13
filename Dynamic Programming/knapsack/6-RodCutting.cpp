#include<bits/stdc++.h>
using namespace std;

int rodCutting(int price[], int n){
    int length[n];
    for (int i = 1; i < n; i++)
    {
        length[i] = i+1;
    }
    
    int t[n+1][n+1];

    for(int i = 0; i<n+1; i++) t[i][0] = 0;
    for(int i = 0; i<n+1; i++) t[0][i] = 0;

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            if(length[i-1]<=j){
                t[i][j] = max(price[i-1] + t[i][j-length[i-1]], t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][n];
}

int main(){
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = 8;   
    cout<<rodCutting(price,n);
    return 0;
}