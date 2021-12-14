#include<bits/stdc++.h>
using namespace std;

string superSequenceLength(string x, string y, int n, int m){
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
    // for (int i = 0; i < n+1; i++)
    // {
    //     for (int j = 0; j < m+1; j++)
    //     {
    //         cout<<t[i][j]<<"    ";
    //     }
    //     cout<<endl;
    // }

    string s = "";
    while (n!= 0 && m!=0)
    {
        if(t[n-1][m] == t[n][m-1]){
            s += x[n-1];
            n--;
            m--;
        }
        else if(t[n-1][m] > t[n][m-1]){
            // s += x[m-1];
            s += x[n-1];
            n--;
        }
        else{
            // s += x[n-1];
            s += x[m-1];
            m--;
        }
    }
    reverse(s.begin(), s.end());
    // string p = x+y;
    // string q = "";
    // for (int i = 0; i < p.length(); i++)
    // {
    //     for (int j = 0; j < s.length(); j++)
    //     {
    //         if(p[i] != s[i]){

    //         }
    //     }
        
    // }
    
    // cout<<p;
    return s;
}

int main(){
    string x = "acbcf";
    string y = "abcdaf";

    cout<<superSequenceLength(x,y, x.length(), y.length());
    return 0;
}