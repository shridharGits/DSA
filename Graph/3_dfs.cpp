#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &ans){
    ans.push_back(node);
    vis[node] = 1;
    for (auto it: adj[node]){
        if(vis[it]==0){
            dfs(it, adj, vis, ans);
        }
    }
}

int main(){
    int V;
    vector<int> adj[10];
    vector<int> vis(V+1, 0);
    vector<int> ans;

    for(int i = 1; i<=V; i++){
        if(vis[i]==0){
            dfs(i, adj, vis, ans);
        }
    }

    return 0;
}