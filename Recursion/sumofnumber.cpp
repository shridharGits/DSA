#include<iostream>
using namespace std;

int sumofnumber(int n){
    if(n == 0){
        return 0;
    }
    return sumofnumber(n/10) + n%10;
}

int main(){
    cout<<sumofnumber(12345);
    return 0;
}