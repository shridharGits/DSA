#include<bits/stdc++.h>
using namespace std;


bool subsetSum(int arr[], int n, int sum){
    int t[n+1][sum+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if(i == 0 && j == 0){
                t[i][j] = 1;
            }
            else if(j == 0){
                t[i][j] = 1;
            }
            else if(i == 0){
                t[i][j] = 0;
            }
            else{
                if(arr[i-1]<=j){
                    t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
    }
    cout<<"             ";
    for (int i = 0; i < 12; i++)
    {
        cout<<i<<"    ";
    }
    
cout<<endl;
    for (int i = 0; i < n+1; i++)
    {
        cout<<"index : "<<i<<"    ";
        for (int j = 0; j < sum+1; j++)
        {
            cout<<t[i][j]<<"    ";
        }
        cout<<endl;
        
    }
    

    return t[n][sum];   
    
}

int main(){
    int arr[] = {3,2,7,8,10};
    int sum = 11;

    subsetSum(arr,5,11);
    return 0;
}