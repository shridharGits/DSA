#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){
    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if((mid-1) >= start && arr[mid-1] == key){
            return mid-1;
        }
        else if(arr[mid+1] == key && mid+1<=end){
            return mid+1;
        }
        else if(arr[mid]<key){
            start = mid+2;
        }
        else{
            end = mid-2;
        }
    }
    return -1;
}

int main(){
    int arr[] = {5,10,30,20,40};
    cout<<binarySearch(arr,0,5,40);
    return 0;
}