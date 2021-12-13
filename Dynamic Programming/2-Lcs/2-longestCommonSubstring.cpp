#include<bits/stdc++.h>
using namespace std;

int t[1001][1001];
int lcs(string x, string y, int n, int m){
    int c = 0;
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
                    c = max(c, t[i][j]);
                }
                else{
                    t[i][j] = 0;
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
    return c;
}

int main(){
    memset(t,-1, sizeof(t));
    string x = "ABCDGH";
    string y = "ACDGHR";
    cout<<lcs(x,y,x.length(), y.length());
    return 0;
}