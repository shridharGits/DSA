#include<bits/stdc++.h>
using namespace std;

int nextAlphabet(int arr[], int n, int key){
    int i = 0;
    int j = n-1;
    int ans =0;
    while(i<=j){
        int mid = i+(j-i)/2;

        if(arr[mid] == key){
            return arr[mid+1];
        }
        else if(arr[mid]<key){
            i = mid+1;
        }
        else if(arr[mid]>key){
            ans = key;
            j= mid-1;
        }
    }
    return arr[ans];
}

int main(){
    int arr[] = { 'A', 'K', 'S' };
    char k = 'K';

    cout<<nextAlphabet(arr,3,k);
    return 0;
}