#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMyPos(int person){
    if (person == 0
    ){
        return 1;
    }
    else{
        return 1 + getMyPos(person-1);
    }
}

string c(){
    return "friends ";
}
string b(){
    return "my " + c(); 
}

string a(){
    return "hello " + 
    b();
}

void reversal(string &s, int l, int h){
    if (l<h){
        swap(s[l], s[h]);
        reversal(s, l+1, h-1);
    }
}

bool isPalindrome(string &s, int l, int h){
    if (l<h){
        if (s[l] == s[h]){
            // cout<<s[l]<<"   "<<l<<s[h]<<"   "<<h<<endl;
            // if (isPalindrome(s, l+1, h-1)){
            //     return true;
            // };
            return isPalindrome(s, l+1, h-1);
        }
        else{
            return false;
        }
    }
    if (l == h || l+1 == h){
        return true;
    }
    return false;
}


int main(){
    // cout<<getMyPos(5)<<endl;
    // cout<<a()<<endl;

    // string reversal
    // string s = "hello";
    // reversal(s, 0, s.length()-1);
    // cout<<s;

    // is palindrome
    string s = "racecar";
    if(isPalindrome(s, 0, s.length()-1)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}