#include<bits/stdc++.h>
using namespace std;

int t[10001][10001];

int lcs(string x, string y, int n, int m){
    if(n == 0 || m == 0){
        return 0;
    }
    else if(x[n-1] == y[m-1]){
        return 1 + lcs(x,y,n-1,m-1);
    }
    else{
        return max(lcs(x,y,n-1,m), lcs(x,y,n,m-1));
    }
}

int lcsM(string x, string y, int n, int m){
    if(n == 0 || m == 0){
        return t[n][m] = 0;
    }
    else if(t[n][m] != -1){
        return t[n][m];
    }
    else if(x[n-1] == y[m-1]){
        return t[n][m] = 1 + lcs(x,y,n-1,m-1);
    }
    else{
        return t[n][m] = max(lcs(x,y,n-1,m), lcs(x,y,n,m-1));
    }
}

int main(){
    string x = "ABCDGH";
    string y = "AEDFHR";
    memset(t,-1,sizeof(t));
    cout<<lcsM(x,y,x.length(), y.length());
    return 0;
}