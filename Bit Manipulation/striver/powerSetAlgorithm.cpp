#include<bits/stdc++.h>
using namespace std;

int main(){
    // find the xor of all subset and then xor them all
    int a[] = {1,2,3};

    // algo starts (kind of pick and non-pic algorithm);
    // square of number = (1<<n);
    int n = 3;
    vector<int> v;

    for (int i = 0; i < (1<<n); i++)
    {
        for (int bit = 0; bit < n; bit++)
        {
            if((n&(1<<bit))){
                cout<<a[bit]<<" ";
                v.push_back(a[bit]);
            }
        }
        cout<<endl;
    }
    

    return 0;
}