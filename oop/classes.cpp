#include<bits/stdc++.h>
using namespace std;

struct structA{
    char c;
    short int s;
}A;

struct structB{
    short int s;
    char c;
    int i;
}B;

struct structC{
    char c;
    double d;
    int s;
}C;

struct structD{
    double d;
    int s;
    char c;
}D;


int main(){
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    cout<<sizeof(C)<<endl;
    cout<<sizeof(D)<<endl;
    
    return 0;
}