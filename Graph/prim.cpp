#include<bits/stdc++.h>
#define I INT_MAX
using namespace std;

int main(){
    int cost[8][8] = {{I,I,I,I,I,I,I,I},
                      {I,I,25,I,I,I,5,I},
                      {I,25,I,12,I,I,I,10},
                      {I,I,12,I,8,I,I,I},
                      {I,I,I,8,I,16,I,14},
                      {I,I,I,I,16,I,20,18},
                      {I,I,I,I,I,20,I,I},
                      {I,I,10,I,14,18,I,I}};

    int near[8] = {I,I,I,I,I,I,I,I};

    int t[2][8];
    int n = 8;
    int min = I;
    int u,v;

    // for finding minimum in upper triangular
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(cost[i][j]<min){
                min = cost[i][j];
                u = i;
                v = j;
            }
        }
    }

    t[0][0] = u;
    t[1][0] = v;
    near[u] = 0;
    near[v] = 0;

    // to decide which edge has minimum weight
    for (int i = 1; i < n; i++)
    {
        if(cost[i][u] < cost[i][v]){
            near[i] = u;
        }
        else{
            near[i] = v;
        }
    }
    
    int k;
    // to fill ans array
    for (int i = 0; i < n-2; i++)
    {
        //to check near array and find min one
        min=I;
        for (int j = 1; j < n; j++)
        {
            if(near[j]!=0 && cost[j][near[j]] < min){
                k=j;
                min = cost[j][near[j]];
            }
        }

        t[0][i] = k;
        t[1][i] = near[k];
        near[k] = 0;

        for (int j = 1; j < n; j++)
        {
            if(near[j]!=0 && cost[j][k] < cost[j][near[j]]){
                near[j] = k;
            }
        }
        
        
    }
    
    for (int i = 0; i < n-2; i++)
    {
        cout<<t[0][i]<<", "<<t[1][i]<<endl;
    }
    
    
    
    return 0;
}