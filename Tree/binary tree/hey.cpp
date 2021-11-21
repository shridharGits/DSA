#include<bits/stdc++.h>
using namespace std;

int main(){
    map <char, int> m;

    string s = "alphaadida";

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    int c = 0;
    for (auto it : m)
    {
        if (it.second == 1){
            c++;
        }
    }
    cout<<c;
    
    
    return 0;
}