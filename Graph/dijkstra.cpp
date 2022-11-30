#include<bits/stdc++.h>
using namespace std;

int main(){
    // Create adjacency list
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> adj[n];
    for (int i = 0; i < e; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    // Enter source
    int source;
    cin>>source;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dis(n,INT_MAX);
    
    dis[source] = 0;
    pq.push({0,source});

    while(!pq.empty()){
        int node = pq.top().second;
        int distance = pq.top().first;
        pq.pop();
        
        for (auto it : adj[node])
        {
            if(it.second + distance < dis[it.first]){
                dis[it.first] = it.second + distance;
                pq.push({dis[it.first], it.first});
            }
        }
    }
    
    
    return 0;
}