#include<bits/stdc++.h>
using namespace std;

void nearestSmallerToLeft(int arr[], int n){
    stack <int> s;
    vector<int> v;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        c++;
        if (i == 0){
            v.push_back(-1);
        }
        else{
            s.push(arr[i-1]);
            while(!s.empty()){
                if (s.top()<arr[i]){
                    v.push_back(s.top());
                    break;
                }
                s.pop();
            }
        }
        if (v.size()!=c){
            v.push_back(-1);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<"   ";
    }
    
}

int main(){
    int arr[] = {4,5,2,10,8};
    nearestSmallerToLeft(arr,5);
    return 0;
}