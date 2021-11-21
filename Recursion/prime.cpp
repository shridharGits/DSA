#include<bits/stdc++.h>
using namespace std;

int isPrime(int n, int i){
    if(i>sqrt(n))
        return 1;
    if(n%i == 0){
        return 0;
    }
    return isPrime(n,i+1);
}

int main(){
    int i =2;
    cout<<isPrime(44, i);
    return 0;
}