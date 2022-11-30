#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int lb, int ub){
    int start = lb;
    int end = ub;
    int pivot = arr[lb];

    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[lb], arr[end]);
    return end;
}

void quickSort(int arr[], int lb, int ub){
    if(lb<ub){
        int loc = partition(arr, lb, ub);
        quickSort(arr, lb, loc-1);
        quickSort(arr, loc+1, ub);
    }
}

int main(){
    int arr[] = {7,6,10,5,9,2,1,15,7};
    int n = 9;
    quickSort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}