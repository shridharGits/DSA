#include<iostream>
using namespace std;

int partition(int a[], int lb, int ub){
    int pivot = a[lb];
    int start = lb;
    int end = ub;

    while (start<end)
    {
        while(a[start] <= pivot){
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start<end){
            swap(a[start], a[end]);
        }
    }
    swap(a[lb], a[end]);
    return end;
}

void quickSort(int a[], int lb, int ub){
    if (lb<ub){
        int location = partition(a,lb,ub);
        quickSort(a,lb,location-1);
        quickSort(a,location+1, ub);
    }
}

int main(){
    int a[9] = {7,6,10,5,9,2,1,15,7};
    quickSort(a, 0, 9);
    for (int i = 0; i < 9; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}