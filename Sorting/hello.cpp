#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void insertionSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int min = arr[i];
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int partition(int arr[], int lb, int ub){
    int start = lb;
    int end = ub;
    int pivot = arr[lb];

    while (start<end)
    {
        while(arr[start]<=pivot){
            start++;
        }
        while (arr[end]>pivot)
        {
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
    int arr[] = {8,4,1,5,4,2,2};
    int n = 7;
    quickSort(arr, 0, 6);
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}