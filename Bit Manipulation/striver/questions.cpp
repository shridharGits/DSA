#include<bits/stdc++.h>
using namespace std;

void question1(){
    // find element occuuring once;
    int a[] = {2,1,2,5,6,5,7,7,6};
    int ans = a[0];
    for (int i = 1; i < 9; i++)
    {
        ans = ans^a[i]; 
    }
    cout<<ans<<endl;
}

void question2(){
    // swap numbers using xor
    int a = 5;
    int b = 7;

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<a<<endl;
    cout<<b<<endl;
}

void question3(){
    // Given N, print all xors of 1-N; wihtout using for loops
    int n = 8;
    if(n%4 == 0) cout<<n<<endl;
    if(n%4 == 1) cout<<1<<endl;
    if(n%4 == 2) cout<<n+1<<endl;
    if(n%4 == 3) cout<<0<<endl;
}

void question4(){
    // Given range L-R find all xors without using for loops
    int L = 3;
    int R = 6;

    // find xor of l-1;
    // find xor of R;

    // then xor them both 
}

void question5(){
    // find number is even or odd
    int n = 6;
    if((n&1) == 0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}

void question6(){
    // find ith bit of n; counting starts from 0
    int n = 5;
    int i = 1;
    int mask = 1<<i;
    if((mask&n) == 0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
}

void question7(){
    // set the ith bit (make it one);
    int n = 5;
    int i = 1;
    int mask = 1>>i;
    int ans = (n&mask);
}

void question8(){
    // clear the ith bit (make it zero);
    int n = 5;
    int i = 2;
    int mask = ~(1>>i);
    int ans = (n&mask);
}

void question9(){
    // unset the last set bit
    int n = 13;
    int ans = (n&(n-1));
}
void question10(){
    // check if number is power of 2;
    int n = 16;
    if((n&(n-1)) == 0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}


int main(){
    question10();
    return 0;
}