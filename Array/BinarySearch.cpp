#include<iostream>
using namespace std;

int binarySearch(int a[], int n, int ele){
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        int mid = (start+end)/2;
        if (ele == a[mid]){
            return mid+1;
        }
        else if (ele>a[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;    
}

int main(){
    int a[10] = {1,2,3,4,8,12,22,45,64,88};
    int ele;
    cin>>ele;
    
    cout<<"element found at : "<<binarySearch(a,10,ele);
    return 0;
}