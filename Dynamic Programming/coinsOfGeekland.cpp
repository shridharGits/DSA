#include<bits/stdc++.h>
using namespace std;

int t[6][6];
int n = 5;
void solve(int mat[5][5]){
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            t[i][j] = mat[i-1][j-1]+t[i-1][j]+t[i][j-1]-t[i-1][j-1];
            cout<<t[i][j]<<"    ";
        }
        cout<<endl;
    }
    
}

int main(){
    int mat[5][5] = {{1, 1, 1, 1, 1},
                    {2, 2, 2, 2, 2}, 
                    {3, 8, 6, 7, 3},
                    {4, 4, 4, 4, 4},
                    {5, 5, 5, 5, 5},
                };
    solve(mat);
    return 0;
}