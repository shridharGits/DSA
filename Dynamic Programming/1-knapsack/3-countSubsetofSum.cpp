#include<bits/stdc++.h>
using namespace std;

int countSubsetSum(int arr[], int n, int sum){
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

int main(){
    int arr[] = {0,0,0,0,0,0,0,0,1};
    int sum = 1;
    cout<<countSubsetSum(arr, 9,1);
    return 0;
}
/*
int arr[] = {0,0,0,0,0,0,0,0,1};
    int sum = 1;
if there are zeros in testcase like above eg
int m = 1e9+7;
	    
	    for(int i = 0; i<sum+1; i++){
	        t[0][i] = 0;
	    }
	    
        t[0][0] = 1;
        
	    int z = 0;
	    for(int i = 0; i<n; i++){
	        if(arr[i] == 0){
	            z++;
	        }
	        t[i+1][0] = pow(2,z);
	    }
*/