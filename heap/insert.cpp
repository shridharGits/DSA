#include<iostream>
using namespace std;

void insert(int a[], int n){
    int i = n;
    int temp = a[i];
    while (i>1 && temp>a[i/2])
    {
        a[i] = a[i/2];
        i = i/2;
    }
    a[i] = temp;
} 

void Delete(int a[], int n){
    int i = 1;
    int j = 2*i;
    int val = a[1];
    a[1] = a[n];
    int x = a[n];
    while(j<n-1){
        if(a[j+1] > a[j]){
            j=j+1;
        }
        if(a[i]<a[j]){
            swap(a[i],a[j]);
            i=j;
            j=2*j;
        }
        else{
            break;
        }
    }
    a[n] = val;
    cout<<"deleted value : "<<val<<endl;
}

int main(){
    int arr[] = {0,2,5,8,9,4,10,7};
    for (int i = 2; i < 8; i++)
    {
        insert(arr,i);
    }
    
    for (int i = 7; i > 1; i--)
    {
        Delete(arr,i);
    }
    
    
    for (int i = 1; i < 8; i++)
    {
        cout<<arr[i]<<"     ";
    }
    cout<<endl;
    return 0;
}