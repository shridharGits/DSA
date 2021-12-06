#include<bits/stdc++.h>
using namespace std;

// Basically design a number system with base 9
int base9(int n){
    int mul = 1;
    int ans = 0;

    while(n!=0){
        int dig = n%9;
        n = n/9;
        
        ans += mul*dig;
        mul = mul*10;
    }
    return ans;
}

int main(){
    int n = 118;
    cout<<base9(n);
    return 0;
}