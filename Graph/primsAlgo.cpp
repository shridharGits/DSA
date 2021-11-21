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
    int t[2][6];
    int n = 8;
    int min = I;
    int u,v;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(cost[i][j] < min){
                min = cost[i][j];
                u = i;
                v = j;
            }
        }
    }
    cout<<"step 1"<<endl;

    t[0][0] = u;
    t[1][0] = v;

    near[u] = near[v] = 0;

    // to decide with end has minimum weight
    for (int i = 1; i < n; i++)
    {
        if(cost[i][u] < cost[i][v]){
            near[i] = u;
        }
        else{
            near[i] = v;
        }
    }
    cout<<"step 2"<<endl;
    int k;
    
    for (int i = 0; i < n-2; i++)
    {
        min=I;
        for (int j = 1; j < n; j++)
        {
            if(near[j]!=0 && cost[j][near[j]] < min){
                k = j;
                min = cost[j][near[j]];
            }
        }
        cout<<"step 3"<<endl;
        t[0][i] = k;
        t[1][i] = near[k];
        near[k] = 0;
        cout<<"step 4"<<endl;;

        for (int j = 1; j < n; j++)
        {
            if(near[j]!=0 && cost[j][k] < cost[j][near[j]]){
                near[j] = k;
            }
        }
    }
    cout<<"step 5"<<endl;

    for (int i = 0; i < n-2; i++)
    {
        cout<<"( "<<t[0][i]<<", "<<t[1][i]<<" ) "<<endl;
    }
    
    
    


    return 0;
}