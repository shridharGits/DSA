#include<bits/stdc++.h>
using namespace std;

int lengthOf(string s, int i){
    if(!isalpha(s[i])){
        return i;
    }
    return lengthOf(s,i+1);
    
}

int main(){
    string s = "hello";
    cout<<lengthOf(s,0);
    return 0;
}