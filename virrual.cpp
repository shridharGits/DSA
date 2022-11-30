#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout<<"this is base class"<<endl;
    }
};
class Derieved : public Base{
    public:
    void display(){
        cout<<"this is derieved class"<<endl;
    }
};

int main(){
    Base b;
    // b.display();
    Derieved d;
    // d.display();
    Base *bobj;
    Derieved dobj;
    bobj = &dobj;
    bobj->display();
    return 0;
}