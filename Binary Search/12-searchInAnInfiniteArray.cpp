#include<bits/stdc++.h>
using namespace std;

int searchInInfinite(int arr[], int key){
    int low = 0;
    int high = 1;

    while(key>high){
        low = high;
        high = high*2;
    }


    int i = low;
    int j = high;
    // cout<<low<<high<<endl;

    while(i<=j){
        int mid = i+(j-i)/2;
        // cout<<mid<<endl;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
            i  = mid+1;
        }
        else{
            j = mid-1;
        }
    }

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
    cout<<searchInInfinite(arr,19);
    return 0;
}