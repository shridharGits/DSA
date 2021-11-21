#include<iostream>
using namespace std;

int main(){
    // int q = 4;
    // cout<<&q;
    // int *p = &q;
    // cout<<p<<"  "<<p++;
    // cout<<p<<endl;
    // cout<<&p<<endl;


    int a[] = {5,4,1,3};
    int *p = a;
    // cout<<p<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<*(p+i)<<"  ";          //prints all elements
    //     cout<<*(p++)<<"  ";          //prints all elements
    // }

    
    // cout<<endl;
    // cout<<&a[2];

    // cout<<*(a+1)<<"  "<<*a+1;

    cout<<*(2+a)<<"  "<<2[a];
    return 0;
}