#include<iostream>
using namespace std;

void sumTriangle(int arr[], int n){
    if(n<1){
        return;
    }
    int a[n-1];
    for (int i = 0; i < n-1; i++)
    {
        a[i] = arr[i]+arr[i+1];
    }
    
    sumTriangle(a,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"    ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    sumTriangle(arr,size);

    return 0;
}