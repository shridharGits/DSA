#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    


    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"     ";
    }
    return 0;
}