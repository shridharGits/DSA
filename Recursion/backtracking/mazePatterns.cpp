#include<bits/stdc++.h>
using namespace std;

// Print number of paths
int countPaths(int r, int c){
    if(r == 1 || c == 1){
        return 1;
    }
    int left = countPaths(r-1,c);
    int right = countPaths(r,c-1);
    return left+right;
}

void printPaths(int r, int c, string s){
    if(r == 1 && c == 1){
        cout<<s<<endl;
        return;
    }
    if(r>1){
        s+='D';
        printPaths(r-1,c,s);
        s.pop_back();
    }
    if(c>1){
        s+='R';
        printPaths(r,c-1,s);
        s.pop_back();
    }
}

int printPathsDiagonal(int r, int c){
    if(r == 1 || c == 1){
        return 1;
    }
    int diagonal = printPathsDiagonal(r-1,c-1);
    int left = printPathsDiagonal(r-1,c);
    int right = printPathsDiagonal(r,c-1);
    return left+right+diagonal;
}

void printPathsDiagonal(int r, int c, string s){
    if(r == 1 && c==1){
        cout<<s<<endl;
    }
    if(r>1 && c>1){
        s+='D';
        printPathsDiagonal(r-1,c-1,s);
        s.pop_back();
    }
    if(c>1){
        s+='V';
        printPathsDiagonal(r,c-1,s);
        s.pop_back();
    }
    if(r>1){
        s+='H';
        printPathsDiagonal(r-1,c,s);
        s.pop_back();
    }
}

void printPathWithObstacle(int r, int c, bool board[3][3], string s, int n){
    if(r == n-1 && c == n-1){
        cout<<s<<endl;
        return;
    }
    if(board[r][c]==false){
        return;
    }
    if(r<n-1){
        s+='D';
        printPathWithObstacle(r+1,c,board,s,n);
        s.pop_back();
    }
    if(c<n-1){
        s+='R';
        printPathWithObstacle(r,c+1,board,s,n);
        s.pop_back();
    }
}

void printAllPaths(int r, int c, bool board[3][3], string s, int n, int step,int path[3][3]){
    if(r == n-1 && c == n-1){
    path[r][c] = step+1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<s<<endl;
        cout<<endl;
        return;
    }
    if(!board[r][c]){
        return;
    }
    board[r][c] = false;
    path[r][c] = step+1;
    if(r<n-1){
        s+='D';
        printAllPaths(r+1,c,board,s,n,step+1,path);
        s.pop_back();
    }
    if(c<n-1){
        s+='R';
        printAllPaths(r,c+1,board,s,n,step+1,path);
        s.pop_back();
    }
    if(r>0){
        s+='U';
        printAllPaths(r-1,c,board,s,n,step+1,path);
        s.pop_back();
    }
    if(c>0){
        s+='L';
        printAllPaths(r,c-1,board,s,n,step+1,path);
        s.pop_back();
    }
    board[r][c] = true;
}

int main(){

    // Q1: Print number of paths
    // cout<<countPaths(3,3)<<endl;

    // Q2: Print the paths 
    // string s="";
    // printPaths(3,3,s);

    // Q3: Print number of paths including diagonals
    // cout<<printPathsDiagonal(3,3);

    // Q3: Print paths including diagonals
    // string s="";
    // printPathsDiagonal(3,3,s);
    
    // Q4: Maze with obstacle
    string s = "";
    bool board[3][3] = {{true,true,true},{true,true,true},{true,true,true}};
    int path[3][3];
    memset(path,0,sizeof(path));
    // printPathWithObstacle(0,0,board,s,3);

    // Q: Print all paths (right,left,up,down) : Backtraking
    printAllPaths(0,0,board,s,3,0,path);

    return 0;
}