#include<bits/stdc++.h>
using namespace std;

int parent[10000];
int ranks[10000];

void makeSet(int n){
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        ranks[i] = 0;
    }
}

int findParent(int node){
    if(node == parent[node]){
        return node;
    }
    return parent[node] = findParent(parent[node]);
}

void unions(int u, int v){
    u = findParent(u);
    v = findParent(v);

    if(ranks[u]<ranks[v]){
        parent[u] = v;
    }
    else if(ranks[v]<ranks[u]){
        parent[v] = u;
    }
    else{
        parent[v] = u;
        ranks[u]++;
    }
}

int main(){
    makeSet(6);
    
    return 0;
}