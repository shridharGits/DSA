#include<bits/stdc++.h>
using namespace std;

void firstUpperCase(string s, int i){
    if(i>s.length()){
        return;
    }
    if(isupper(s[i])){
        cout<<s[i];
        return;
    }
    firstUpperCase(s,i+1);
}


int main(){
    string s = "geeksforgeeKs";
    int i = 0;
    firstUpperCase(s, i);
    return 0;
}