#include<iostream>
using namespace std;

void insertionSort(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        int j = i-1;
        while (j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
 
}

int main(){
    int a[10] = {22,1,12,4,6,45,5,78,10,8};
    insertionSort(a,10);
    return 0;
}