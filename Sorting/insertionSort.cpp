#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    for (int i = 0; i < n; i++)
    { 
        cout<<arr[i]<<" ";
    }
}

void sort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
                j--;
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    
    for (int i = 0; i < n; i++)
    { 
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {5,4,10,1,6,2};
    int n = 6;
    sort(arr,n);
    return 0;
}