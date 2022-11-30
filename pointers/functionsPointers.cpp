#include<iostream>
using namespace std;

void incrementByValue(int a){
    a = a+1;
}
void incrementByReference(int *a){
    *a = *a+1;
}

int main(){
    int a = 10;
    incrementByValue(a);
    cout<<"By value : "<<a<<endl;
    
    int *p = &a;
    incrementByReference(p);
    cout<<"By Reference : "<<a<<endl;

    return 0;
}