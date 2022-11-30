#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void sort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int min = arr[i];
        int pos = i;
        for (int j = i; j < n; j++)
        {
            if(arr[j]<min){
                min = arr[j];
                pos = i;
            }
        }
        swap(arr[i], arr[pos]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] = {7,4,10,8,3,1};
    int n = 6;

    selectionSort(arr, n);
}