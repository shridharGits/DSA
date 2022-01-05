#include<bits/stdc++.h>
using namespace std;

int minDifference(int arr[], int n, int key){
    int i = 0;
    int j = n-1;

    while(i<=j){
        int mid = i + (j-i)/2;
        if(arr[mid] == key){
            return 0;
        }
        else if(arr[mid]<key){
            i = mid+1;
        }
        else{
            j = mid-1;
        } 
    }

    return min(abs(arr[i]-key), abs(arr[j]-key));
}

int main(){
    int arr[] = {1,3,8,10,15};
    cout<<minDifference(arr,5,12);
    return 0;
}