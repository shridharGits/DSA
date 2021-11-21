#include<iostream>
using namespace std;


void print(int n){
    if (n == 0){
        cout<<n<<endl;
        return;
    }
    else{
        print(n-1);
        cout<<n<<endl;
    }
}

void printnto1(int n){
    if (n == 0){
        return;
    }
    cout<<n<<endl;
    printnto1(n-1);
}

int factorial(int n){
    if (n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    // print(10);
    // printnto1(5);
    cout<<factorial(5);
    return 0;
}