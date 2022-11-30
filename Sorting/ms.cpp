#include<bits/stdc++.h>
using namespace std;

vector<int> v(9, 0);
void merge(int arr[], int lb, int mid, int ub){
    int n1 = mid-lb+1;
    int n2 = ub-mid;
    int l[n1], m[n2];
    for (int i = 0; i < n1; i++)
    {
        l[i] = arr[lb+i];
    }
    
    for (int i = 0; i < n2; i++)
    {
        m[i] = arr[mid+i+1];
    }
    
    int start = 0;
    int end = 0;
    int k = lb;
    while(start<n1 && end<n2){
        if(l[start]<=m[end]){
            arr[k] = l[start];
            start++;
            k++;
        }
        else{
            arr[k] = m[end];
            k++;
            end++;
        }
    }

    while(start<n1){
        arr[k] = l[start];
        k++;
        start++;
    }
    while(end<n2){
        arr[k] = m[end];
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
        cout<<arr[i]<<" ";
    }


    return 0;
}