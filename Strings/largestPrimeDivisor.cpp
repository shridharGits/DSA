#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n = 42;
    int m = n;
    while (m)
    {
        int x = n%m;
        if(isPrime(m) && x == 0){
            break;
        }
        m--;
    }
    cout<<m;

    return 0;
}