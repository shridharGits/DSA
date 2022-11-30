#include<iostream>
using namespace std;

int main(){
    int a = 1;

    
    cout<< a++  + ++a + a++ + ++a + a++ + ++a <<endl; 
    cout<<a<<endl;
    //     1    3      3     5     5     7
    // a = a +1;

    return 0;
}