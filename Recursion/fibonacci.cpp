#include<iostream>
using namespace std;

int k = 0;
int sum = 0;
int fibonacci(int n){
    if (k == n)
        return 1;
    else{
        cout<<sum;
        k++;
        return fibonacci(k) + fibonacci(k-1);
    }
}

int main(){
    fibonacci(5);
    for (int i = 0; i < 5; i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}