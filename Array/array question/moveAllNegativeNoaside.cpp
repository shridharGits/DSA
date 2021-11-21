#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int low = 0;
    int high = 8;

    while(low<=high){
        if(arr[low] > 0){
            swap(arr[low], arr[high]);
            high--;
        }
        else{
            low++;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"     ";
    }
    
    return 0;
}