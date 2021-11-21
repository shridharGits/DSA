#include<bits/stdc++.h>
using namespace std;

// wap to check is number power of 2 : normal method
void isPowerOf(int n, int value){
    while (n%2 == 0)
    {
        n = n/2;
    }
    if (n == 1)
        cout<<"yes";

    else
        cout<<"no";  
}

// wap to check is number power of 2 : bit manipulation method
bool isPowerOf2(int n){
    return (n && !(n&n-1));
}


// wap a program to count number of ones in binary representation of a number
int numberOfOne(int n){
    int count = 0;
    while (n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
} 

// wap a program to generate all subset {a,b,c} = {}, {a}, {b}, {c}, {a,b}, {b,c}, {a,c}, {a,b,c}
/*
{a,b,c} 
{}          000         0
{c}         001         1
{b}         010         2
{b,c}       011         3
{a}         100         4
{a,c}       101         5
{a,b}       110         6
{a,b,c}     111         7
*/
void generateSubset(int arr[], int n){
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    
}

// wap a program to check given number is even or odd
bool isNumberEven(int n){
    return ((n&&1) == 0);
}
// wap a program to check given number is even or odd
void swap(int a, int b){
    cout<<"before swap:"<<endl;
    cout<<"a : "<<a<<" b: "<<b<<endl;

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<"after swap:"<<endl;
    cout<<"a : "<<a<<" b: "<<b<<endl;
}
int main(){
    // isPowerOf(256, 2);

    // cout<<isPowerOf2(16);

    // cout<<numberOfOne(9);

    // int arr[4] = {1,2,3,4};
    // generateSubset(arr,4);

    // cout<<isNumberEven(7);

    swap(5,7);

    return 0;
}