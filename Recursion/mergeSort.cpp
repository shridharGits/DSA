#include<iostream>
using namespace std;

void merge(int a[], int lb, int ub, int mid){
    
}

void mergeSort(int a[], int lb, int ub){
    if (lb<ub){
        int mid = lb+ub/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,ub,mid);
    }
}

int main(){
    int a[9] = {7,6,10,5,9,2,1,15,7};
    mergeSort(a, 0, 9);
    // for (int i = 0; i < 9; i++)
    // {
    //     cout<<a[i]<<"  ";
    // }

    cout<<73/5;
    return 0;
}