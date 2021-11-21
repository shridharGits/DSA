#include<iostream>
using namespace std;

int linearSearch(int a[], int ele){
    for (int i = 0; i < 10; i++)
    {
        if (ele == a[i]){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int a[10] = {6,5,1,2,7,8,9,10,24,12};
    int ele;
    cin>>ele;
    
    cout<<"element found at : "<<linearSearch(a,ele);
    
    return 0;
}