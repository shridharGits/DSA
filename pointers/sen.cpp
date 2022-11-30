#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    // cout<<s<<endl;
    string ans = "";
    int max = 0;
    string temp = "";
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' '){
            if(c>max){
                max = c;
                ans = temp;
                temp = "";
                c = 0;
            }
        }
        else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            // cout<<s[i]<<" ";
            temp+=s[i];
            c++;
        }
    }
    if(c>max){
        max = c;
        ans = temp;
        temp = "";
        c = 0;
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    string ans = solve(s) + "mezpq02rcd16";
    for (int i = 0; i < ans.length(); i++)
    {
        if((i+1)%4 == 0){
            ans[i] = '_';
        }
    }
    cout<<ans<<endl;
    return 0;
}