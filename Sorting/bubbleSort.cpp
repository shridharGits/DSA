#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int c = 0;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                c++;
            }
        }
        if(c==0){
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] = {15,16,6,8,5};
    int n = 5;
    bubbleSort(arr, n);
    return 0;
}