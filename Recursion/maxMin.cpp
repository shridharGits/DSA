#include<bits/stdc++.h>
using namespace std;

void f(int arr[], int &min, int &max, int &i, int size){
    if(i>=size){
        return;
    }
    if(arr[i] < min){
        min = arr[i];
    }
    if(arr[i] > max){
        max = arr[i];
    }
    i++;
    f(arr, min, max, i, size);
}

int main(){
    int min = INT_MAX;
    int max = INT_MIN;
    int i = 0;
    int arr[] = {60,22,33,4,-9,25,40,66,72,-20};

    f(arr,min,max, i, 10);

    cout<<max<<endl;
    cout<<min<<endl;
    return 0;
}