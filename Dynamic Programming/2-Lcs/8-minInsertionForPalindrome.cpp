#include<bits/stdc++.h>
using namespace std;

int minDeletions(string x, string y, int n, int m){
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
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
        }
    }
    return n-t[n][m];
}

int main(){
    string x = "aebcbda";
    string s = "aebcbda";
    reverse(s.begin(), s.end());
    string y = s; 
    cout<<minDeletions(x,y, x.length(), y.length());
    return 0;
}