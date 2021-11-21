#include<bits/stdc++.h>
#define I INT_MAX
using namespace std;



int edges[3][9] = {{1,1,2,2,3,4,4,5,5},
                    {2,6,3,7,4,5,7,6,7},
                    {25,5,12,10,8,16,14,20,19}};

int record[8] = {-1,-1,-1,-1,-1,-1,-1,-1};   // for checking cycle 
int included[9] = {0};
int t[2][6];

void Myunion(int u, int v){
    if(record[u]<record[v]){
        record[u] += record[v];
        record[v] = u;
    }
    else{
        record[v]+=record[u];
        record[u] = v;
    }
}

int find(int u){
    int x = u, v=0;
    while(record[x]>0){
        x=record[x];
    }
    while(u!=x){
        v=record[u];
        record[u] = x;
        u=v;
    }
    return x;
}

int main(){
    int n = 7,e=9;
    int min = I;
    int i = 0;
    int u,v,k;
    while(i<n-1){
        min = I;
        for (int j = 0; j < e; j++)
        {
            if(included[j] == 0 && edges[2][j] < min){
                min = edges[2][j];
                u = edges[0][j];
                v = edges[1][j];
                k = j;
            }
        }

        if(find(u) != find(v)){
            t[0][i] = u;
            t[1][i] = v;
            Myunion(find(u), find(v));
            i++;
        }
        included[k]=1;
    }
    for (int i = 0; i < n-1; i++)
    {
        cout<<t[0][i]<<", "<<t[1][i]<<endl;
    }
    
    return 0;
}