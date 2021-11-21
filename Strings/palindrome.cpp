#include<bits/stdc++.h>
using namespace std;

int pallindrome(string a){
    string s = a;
    for (int i = 0; i < a.length(); i++)
    {
        if (isalpha(a[i]) || isdigit(a[i])){
            s+=tolower(a[i]);
        }
    }
    int j = 0;
    int k = a.length()-1;
    int f = 1;
    while (j<=k)
    {
        // cout<<s[j]<<"  "<<s[k]<<endl;
        if (s[j] != s[k]){
            f = 0;
            break;
        }
        j++;
        k--;
    }
    return f;
}

int main(){
    string a = "1a2";
    cout<<pallindrome(a);
    return 0;
}