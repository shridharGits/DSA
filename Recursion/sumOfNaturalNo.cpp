#include<bits/stdc++.h>
using namespace std;

int sumOf(int n){
    if(n<=0){
        return 0;
    }
    return n + sumOf(n-1);
}

int main(){
    cout<<sumOf(5);

    cout<<endl<<(floor(double((5/2))));
    return 0;
}