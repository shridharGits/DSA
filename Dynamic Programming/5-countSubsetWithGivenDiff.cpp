#include<bits/stdc++.h>
using namespace std;

int countSubset(int arr[], int sum, int n){
    int t[n+1][sum+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if(i == 0){
                t[i][j] = 0;
            }
            else if(j == 0){
                t[i][j] = 1;
            }
            else{
                t[0][0] = 1;
                if(arr[i-1]<=j){
                    t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
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
            cout<<t[i][j]<<"  ";
        }
        cout<<endl;
    }
    return t[n][sum];
}

int countSubsetWithGivenDiff(int arr[], int diff, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    sum = (diff + sum)/2;
    cout<<"sum "<<sum<<endl;
    countSubset(arr,sum,n);
}

int main(){
    int arr[] = {0,0,0,0,0,0,0,0,1};
    int diff = 1;
    cout<<countSubsetWithGivenDiff(arr, diff, 9);
    return 0;
}