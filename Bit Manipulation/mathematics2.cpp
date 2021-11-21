#include<iostream>
using namespace std;

void sieveOfEratosthenes(int n){
    bool isPrime[n+1] = {1};

    for (int i = 0; i <= n; i++)
    {
        isPrime[i] = 1;
    }

    isPrime[0] = 0;
    isPrime[1] = 0;
    for (int i = 2; i*i <=n; i++)
    {
        for (int j = 2*i; j <= n; j+=i)
        {
            isPrime[j] = 0;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (isPrime[i] == 1){
            cout<<i<<"  ";
        }
    }
    
}

int gcd(int a, int b){
    if (b==0)
    return a;
    else
        return gcd(b, a%b);
}

int fastPower(int a, int b){
    int res = 1;
    while(b>0){
        if ((b&1) != 0){
            res = res*a;
        }
        a = a*a;
        b = b>>1;
    }
    return res;
}

int main(){
    int a[20];
    // sieveOfEratosthenes(21);

    // cout<<gcd(24,60);

    //modulo operation
    cout<<fastPower(3,5);
    return 0;
}