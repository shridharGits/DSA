#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int level;
    int health;
    char c[100];

    void print(){
        cout<<" [ ";
        cout<<c<<", ";
        cout<<health<<", ";
        cout<<level<<"";
        cout<<" ] "<<endl;
    } 
};

int main(){
    // static
    Hero h1;
    // dynamic
    Hero *h2 = new Hero;
    cout<<(*h2).level<<endl;  
    cout<<h2->level <<endl;

    Hero h3;
    h3.level = 2;
    h3.health = 100;
    // h3.c = "Shridhar";
    h3.print();  
    return 0;
}