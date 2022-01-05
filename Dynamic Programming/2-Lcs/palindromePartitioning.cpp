#include<bits/stdc++.h>
using namespace std;

int lcs(string x, string y, int n, int m){
    int t[n+1][m+1];
    int c = 0;
    int k = 0;
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            if(i==0||j==0){
                t[i][j] = 0;
                
            }
            else{
                if(x[i-1] == y[j-1]){
                    t[i][j] = 1+t[i-1][j-1];
                    if(t[i][j]>c){
                        c = t[i][j];
                        k++;
                    }
                }
                
                else{
                    t[i][j] = 0;
                }
            }
        }
        
    }
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            cout<<t[i][j]<<"    ";
        }
        cout<<endl;
    }
    // cout<<k<<endl;
    return t[n][m];
}

int main(){
    string x = "ababbbabbababa";
    string s = x;
    reverse(s.begin(), s.end());
    string y = s;
    cout<<lcs(x, y, x.length(), y.length());
    return 0;
}