#include<bits/stdc++.h>
using namespace std;

int floorOfK(int arr[], int n, int k){
    int i = 0;
    int j = n-1;
    int ans = -1;
    while(i<=j){
        int mid = i+(j-i)/2;
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid]<k){
            ans = mid;
            i = mid-1;
        }
        else{
            j = mid+1;
        }
    }
}

int main(){
    
    return 0;
}