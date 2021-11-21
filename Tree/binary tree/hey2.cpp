#include<iostream>
using namespace std;

int main(){
    int arr[] = {1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            cout<<arr[j];
        }
        
    }
    
    return 0;
}