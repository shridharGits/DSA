#include<bits/stdc++.h>
using namespace std;

int unreachable(int arr[], int n){
    sort(arr, arr+n);
    int unreachable_no = 1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<= unreachable_no){
            unreachable_no += arr[i];
        }
        else{
            break;
        }
    }
    return unreachable_no;
}

int main(){
    int arr[] = {1,10,4,9,2};
    int n = 5;
    cout<<unreachable(arr,5);
    return 0;
}