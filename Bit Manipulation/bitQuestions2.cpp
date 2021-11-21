#include<bits/stdc++.h>
using namespace std;

// find the only non repeating number in array where every element in array repeats twice o(n) o(1)
void findNonrepeat(int a[], int n){
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ a[i];
    }
    cout<<res<<endl;
}

// find the two non repeating numbers in array where every element in array repeats twice o(n) o(1)
void findNonrepeat2(int a[], int n){
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res^a[i];
    }
    for (int i = 0; i < n; i++)
    {
        res = res^a[i];
    }
    cout<<res<<endl;   
}


int main(){
    // int a[] = {5,4,1,3,5,4,1};
    // findNonrepeat(a, 7);


    int b[] = {2,2,1,5,1,1,2};
    findNonrepeat2(b, 7);
    return 0;
}