#include<iostream>
using namespace std;

void bubbleSort(int a[], int n){
    int pass = 0;
    for (int i = 0; i<n-1; i++){   //no of pass
        int swapCounter = 0;
        for (int j = 0; j<(n-1-i); j++){  //to compare elements  // n-1-i is done cause last i elements are already sorted so no comparison requires
            if (a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                swapCounter = 1;
            }
        }
        if (swapCounter == 0)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    
}

int main(){
    int a[10] = {2,1,3,4,5,6,7,8,9,10};

    bubbleSort(a, 10);
    return 0;
}