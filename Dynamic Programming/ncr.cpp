#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 15;
    int r = 3;

    int t[r+1];
        memset(t, 0, sizeof(t));
        int mod = 1e9+7;
        t[0]=1;
        for(int i = 1; i<n+1; i++){
            for(int j = min(i, r); j>0; j--){
                t[j] = (t[j]+t[j-1])%mod;
                cout<<t[j]<<" ";
            }
            cout<<endl;
        }
    cout<<t[r]%mod;
    return 0;
}