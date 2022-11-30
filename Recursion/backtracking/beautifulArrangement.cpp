#include<bits/stdc++.h>
using namespace std;

int c = 0;
vector<int> v;
bool isDivisible(vector<int> v){
    bool f1 = false;
    bool f2 = false;
    for(int i=1; i<v.size(); i++){
        if(v[i]%i == 0){
            f1 = true;
        }
        else{
            f1 = false;
        }
        if(i%v[i] == 0){
            f2 = true;
        }
        else{
            f2 = false;
        }
        if(f1==false && f2==false){
            return false;
        }
    }
    return (f1||f2);
}
void solve(vector<int> &freq, int n, int pos){
    if(pos == n+1){
        // if(isDivisible(v)){
            c++;
        // }
        return;
    }
    for(int i = 1; i<=n; i++){
        if(!freq[i] && (pos%i == 0 || i%pos == 0)){
            freq[i] = 1;
            v.push_back(pos);
            solve(freq,n,pos+1);
            v.pop_back();
            freq[i]=0;
        }
    }
}

int main(){
    int n = 15;
    vector<int> a;
    vector<int> freq(n+1,0);
    for(int i = 1; i<=n; i++){
        a.push_back(i);
    }
    v.push_back(0);
    solve(freq,n,1);
    cout<<c<<endl;
    return 0;
}