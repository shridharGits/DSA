#include<bits/stdc++.h>
using namespace std;

string ans="";
void printLongestPath(int i, int j, int r, int c, bool a[3][10], string s, int steps){
    if(i == r-1 && j == c-1){
        // cout<<s<<endl;
        if(s.length()>ans.length()){
            ans = s;
        }
        return;
    }
    if(a[i][j] == 0){
        return;
    }
    a[i][j] = 0;
 
    if(i<r-1){
        s+='D';
        printLongestPath(i+1,j,r,c,a,s,steps+1);
        s.pop_back();
    }
    if(j<c-1){
        s+='R';
        printLongestPath(i,j+1,r,c,a,s,steps+1);
        s.pop_back();
    }
    if(i>0){
        s+='U';
        printLongestPath(i-1,j,r,c,a,s,steps+1);
        s.pop_back();
    }
    if(j>0){
        s+='L';
        printLongestPath(i,j-1,r,c,a,s,steps+1);
        s.pop_back();
    }
    a[i][j]=1;
    // board[i][j] = 0;
}

int main(){
    bool a[3][10] = {{1,1,1,1,1,1,1,1,1,1},
                     {1,1,0,1,1,0,1,1,0,1},
                     {1,1,1,1,1,1,1,1,1,1}};

    
    string s = "";
    printLongestPath(0,0,3,10,a,s,0);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            // cout<<board[i][j]<<" ";
        }
        // cout<<endl;
    }
    
    cout<<ans.length()<<endl;

    return 0;
}