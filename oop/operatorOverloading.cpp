#include<bits/stdc++.h>
using namespace std;

class B{
    public: 
    int a;
    int b;

    int add(int a, int b){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output : "<<value2-value1<<endl;
    }
};

class A : public B{
    
};

int main(){
    B obj1;
    B obj2;

    obj1.a = 5;
    obj2.a = 8;


    obj1 + obj2;

    A obj3;
    cout<<obj3.add(2,5);

    return 0;
}