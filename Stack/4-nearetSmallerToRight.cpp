#include<bits/stdc++.h>
using namespace std;

void nearestSmallerToRight(int arr[], int n){
    stack<int> s;
    vector<int> v;
    int c = 0;
    for (int i = n-1; i >= 0; i--)
    {
        c++;
        if (i == n-1){
            v.push_back(-1);
        }
        else{
            s.push(arr[i+1]);
            while (!s.empty())
            {
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
    for (int i = n-1; i >= 0; i--)
    {
        cout<<v[i]<<"   ";
    }
    
}

int main(){
    int arr[] = {4,5,2,10,8};
    //3 4 4 -1;
    nearestSmallerToRight(arr, 5);
    return 0;
}