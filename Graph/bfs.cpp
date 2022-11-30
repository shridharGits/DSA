#include<bits/stdc++.h>
using namespace std;

// BFS: Adjacent nodes first
vector<int> bfsOfGraph(int V, vector<int> adj[]){
    vector<int> bfs;
    vector<int> vis(V+1,0);

    for (int i = 1; i < V+1; i++)
    {
        if(!vis[i]){
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                for (auto it: adj[node])
                {
                    if(!vis[it]){
                        q.push(it);
                        vis[it] = 1;
                    }
                }
                
            }
        }
    }
    return bfs;   
}

void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs){
    storeDfs.push_back(node);
    vis[node]=1;
    for (auto it: adj[node])
    {
        if(!vis[it]){
            dfs(it,vis,adj,storeDfs);
        }
    }
    
}
vector<int> dfsOfGraph(int V, vector<int> adj[]){
    vector<int> storeDfs;
    vector<int> vis(V+1, 0);
    for (int i = 1; i <= V; i++)
    {
        if(!vis[i]){
            dfs(i,vis,adj,storeDfs);
        }
    }
    return storeDfs;
}

int main(){
    int V,m;
    cin>>V>>m;
    vector<int> adj[V+1];
    for (int i = 0; i <m; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    vector<int> bfs = bfsOfGraph(V,adj);
    vector<int> dfs = dfsOfGraph(V,adj);
    for (int i = 0; i < V; i++)
    {
        cout<<dfs[i]<<" ";
    }
    cout<<endl;
        
    return 0;
}

/*
5 7
1 2
1 3
1 5
2 3
2 4
3 4
3 5
*/