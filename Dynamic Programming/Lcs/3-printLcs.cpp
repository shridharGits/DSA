#include<bits/stdc++.h>
using namespace std;


string lcs(string x, string y, int n, int m){
    int t[n+1][m+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }
            else{
                if(x[i-1] == y[j-1]){
                    t[i][j] = 1+t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
        }
        
    }
    string s = "";
    while (n!=0 && m!=0)
    {
        if(t[n-1][m] == t[n][m-1]){
            s+= x[n-1];
            n = n-1;
            m = m-1;
        }
        else{
            if(t[n-1][m] > t[n][m-1]){
                n = n-1;
                m = m;
            }
            else{
                n = n;
                m = m-1;
            }
        }
    }
    reverse(s.begin(), s.end());
    return s;
    
}

int main(){
    string x = "acbcf";
    string y = "abcdgf";
    cout<<lcs(x,y,x.length(), y.length());
    return 0;
}