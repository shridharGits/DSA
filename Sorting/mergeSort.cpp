#include<bits/stdc++.h>
using namespace std;

vector<int> v(9, 0);
void merge(int arr[], int lb, int mid, int ub){
    int start = lb;
    int end = mid+1;
    int k = lb;
    while(start<=mid && end<=ub){
        if(arr[start]<=arr[end]){
            v[k] = arr[start];
            start++;
            k++;
        }
        else{
            v[k] = arr[end];
            end++;
            k++;
        }
    }
    while(start<=mid){
        v[k] = arr[start];
        k++;
        start++;
    }
    while(end<=ub){
        v[k] = arr[end];
        k++;
        end++;
    }
}

void mergeSort(int arr[], int lb, int ub){
    if(lb<ub){
        int mid = (lb+ub)/2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid+1, ub);
        merge(arr, lb, mid, ub);
    }
}

int main(){
    int arr[] = {15,5,24,8,1,3,16,10,20};
    int n = 9;
    mergeSort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}