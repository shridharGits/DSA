#include<bits/stdc++.h>
using namespace std;

void kcloset(int arr[], int n, int x, int k){
    priority_queue<pair<int,int>> m;

    for (int i = 0; i < n; i++)
    {
        m.push({abs(arr[i]-x), arr[i]});
        if(m.size()>k)
            m.pop();
    }

    while(!m.empty()){
        cout<<m.top().second<<endl;
        m.pop();
    }
    
}

int main(){
    int arr[] = {5,6,7,8,4};
    kcloset(arr,5, 7, 3);
    return 0;
}