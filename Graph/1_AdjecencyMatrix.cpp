#include<bits/stdc++.h>
using namespace std;

void adjacencyMatrix(){
    int n,m;

    int adj[n+1][n+1];
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}

void adjacencyList(){
    int n,m;
    vector<int> adj[n+1];

    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

// adjacency list with weights
void adjacencyList2(){
    int n, m;
    vector<pair<int,int>> adj[n+1];

    for (int i = 0; i < n; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    
}

int main(){
    
    return 0;
}