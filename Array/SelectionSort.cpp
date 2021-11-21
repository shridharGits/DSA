#include<iostream>
using namespace std;

void selectionSort(int a[], int n){
    for (int i = 0; i < n-1; i++)       //for passes
    {
        int min = i;
        for (int j = i+1; j<n; j++){
            if (a[j] < a[min]){
                min = j;
            }
        }
        if (min!=i){
            swap(a[i], a[min]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    
}

int main(){
    int a[10] = {22,1,12,4,6,45,5,78,10,8};
    selectionSort(a,10);
    return 0;
}