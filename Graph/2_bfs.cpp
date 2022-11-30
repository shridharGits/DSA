#include<bits/stdc++.h>
using namespace std;

void bfs(int v, vector<int> adj[]){
    vector<int> vis(v+1);
    vector<int> ans;

    for (int i = 1; i <= v; i++)
    {
        queue<int> q;
        q.push(i);
        vis[i] = 1;
        while(!q.empty()){
            if(vis[i] == 0){
                int node = q.front();
                q.pop();
                ans.push_back(node);
                for(auto it: adj[node]){
                    if(vis[it] == 0){
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }
    
}

int main(){
    
    return 0;
}