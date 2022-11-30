#include<bits/stdc++.h>
using namespace std;
string token = "psekf45lha18";
string StringChallenge(string str){
    int n = str.length();
    stack<string> s;
    bool f = false;
    string temp = "";
    int i = 0;
    string ans = "ttt";
    for (i = 0; i < n; i++)
    {
        if(str[i] == '<'){
            f = true;
        }
        else if(str[i] == '>'){
            s.push(temp);
            f = false;
            // cout<<"s.top() : "<<s.top()<<endl;
            temp = "";
        }
        else if(str[i] == '/'){
            i++;
            string t = "";
            while(str[i]!='>'){
                t+=str[i];
                i++;
            }
            // cout<<"t : "<<t<<endl;
            i++;
            if(s.top() != t){
                ans = s.top();
                break;
            }
            else{
                s.pop();
            }
        }
        else if(f==true){
            temp+=str[i];
        }
    }
    if(!s.empty()){
        ans = s.top();
    }

    map<char,int> m;
    string token = "psekf45lha18";
    for (int i = 0; i < token.length(); i++)
    {
        m[token[i]]++;
    }
    string final = "";
    for (int i = 0; i < ans.length(); i++)
    {
        if(m.find(tolower(ans[i]))==m.end()){
            final+=ans[i];
        }
    }


    return final;
}

int main(){
    // string s = "<div>abc</div><p><em><i>test test test</b></em></p>";
    string s = "<div><div><b></b></div>";
    cout<<StringChallenge(s);

    return 0;
}