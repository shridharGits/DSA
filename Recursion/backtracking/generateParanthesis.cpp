#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s){
    stack<char>st;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    if(st.empty())
        return true;
    return false;
}

void solve1(int i, char arr[], int n, string s){
    if(s.length() == n*2){
        if(isBalanced(s))
            cout<<s<<endl;
        return;
    }
    solve1(i,arr,n,s+'(');
    solve1(i,arr,n,s+')');
}

// optimized 
void solve2(int open, int close, int n, string s){
    if(open == 0 && close==0){
        cout<<s<<endl;
        return;
    }
    if(open!=0){
        solve2(open-1,close,n,s+'(');
    }
    if(close>open){
        solve2(open,close-1,n,s+')');
    }
}

int main(){
    string s = "";
    int n = 3;
    int open = 3;
    int close = 3;
    // solve(0,arr,3,s);
    solve2(open,close,n,s);     // optimized
    return 0;
}