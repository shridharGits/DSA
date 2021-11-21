#include<iostream>
using namespace std;

// find the sum of n natural numbers using recursion
int sum(int n){
    if (n == 1){
        return 1;
    }
    return n + sum(n-1);
}

// find a^b usig recursion
int power(int a, int b){
    if (b == 0){
        return 1;
    }
    
    return a*power(a, b-1);
}

int main(){
    // cout<<sum(4);
    // cout<<power(3,4 );
    cout<<73/5;
    return 0;
}