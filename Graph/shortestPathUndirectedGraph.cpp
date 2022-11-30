#include<bits/stdc++.h>
using namespace std;

void shortestPath(int src, vector<pair<int,int>> adj[], vector<int> &dis){
    queue<int> q;
    q.push(src);
    dis[src] = 0;
    while(!q.empty()){
        int node = q.front();
        int distance = dis[node];
        q.pop();
        for (auto it: adj[node])
        {
            if(distance + it.second < dis[it.first]){
                dis[it.first] = distance + it.second;
                q.push(it.first);
            }
        }        
    }
}

void shortestDistanceInDAG(int src, vector<pair<int,int>> adj[], vector<int> &dis){
    queue<int> q;
    q.push(src);
    dis[src] = 0;
    while (!q.empty())
    {
        int node = q.front();
        int distance = dis[node];
        q.pop();
        for (auto it: adj[node])
        {
            if(it.second + distance < dis[it.first]){
                dis[it.first] = it.second + distance;
                q.push(it.first);
            }
        }   
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    vector<int> dis(n+1,INT_MAX);
    vector<pair<int,int>> adj[n];
    for (int i = 0; i < e; i++)
    {
        int u,v,m;
        cin>>u>>v>>m;
        adj[u].push_back({v,m});
    }

    for (int i = 0; i < n; i++)
    {
        if(dis[i]==INT_MAX){
            shortestDistanceInDAG(i,adj,dis);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<i<<" : "<<dis[i]<<endl;
    }
    cout<<endl;
    return 0;
}