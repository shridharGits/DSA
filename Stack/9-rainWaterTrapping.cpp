#include<bits/stdc++.h>
using namespace std;

void rainWaterTrapping(int arr[], int n){
    int maxl[n]={};
    int maxr[n]={};


    maxl[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxl[i] = max(maxl[i-1], arr[i]);
    }    


    maxr[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        maxr[i] = max(maxr[i+1], arr[i]);
    }


    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (min(maxr[i], maxl[i])-arr[i]);
    }
    cout<<sum;
}

int main(){
    int arr[] = {3,0,0,2,0,4};
    rainWaterTrapping(arr, 6);
    return 0;
}