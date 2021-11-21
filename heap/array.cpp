#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,2,6,0,1,2,12};

    int i = 0,j = 1;
    while (i<7)
    {
        if(j == 7){
            arr[i] = -1;
            i++;
            j=i+1;
        }
        if(arr[j]>arr[i]){
            arr[i] = arr[j];
            i++;
            j=i+1;
        }
        else{
            j++;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<"    ";
    }

    return 0;
}