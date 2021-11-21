#include<bits/stdc++.h>
using namespace std;

void adjacencyMatrix(int v, int e){
    int g[v+1][v+1];
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            g[i][j] = 0;
        }        
    }

    for (int j = 0; j < e; j++)
    {
        int x,y;
        cin>>x>>y;
        g[x][y] = 1;
        g[y][x] = 1;
    }

    for (int i = 1; i <=v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
}
void adjacencyList(int v, int e){
    vector<int> g[v+1];
    for (int i = 0; i < e; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cout<<"list"<<endl;
    
    for (int i = 1; i <= v; i++)
    {
        cout<<i<<"-->";
        for (int j = 0; j < g[i].size(); j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
int main(){
    int v,e;
    cin>>v>>e;

    // adjacencyMatrix(v,e);
    adjacencyList(v,e);
    

    return 0;
}