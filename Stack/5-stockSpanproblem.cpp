#include<bits/stdc++.h>
using namespace std;

void stockSpan(int arr[], int n){
    stack <pair <int, int>> s;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        if (s.empty()){
            v.push_back(-1);
        }
        else if(!s.empty() && s.top().first>arr[i]){
            v.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first<=arr[i]){
            while ( !s.empty() && s.top().first<=arr[i])
            {
                s.pop();
            }
            if (s.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<i-v[i]<<"   ";
    }
    
}

int main(){
    int arr[] = {68,735, 101, 770, 525, 279, 559, 563, 465, 106, 146, 82, 28 ,362, 492, 596, 743, 28 ,637 ,392, 205, 703, 154, 293 ,383, 622, 317, 519, 696 ,648, 127, 372 ,339, 270, 713, 68, 700, 236, 295, 704 ,612, 123};
    stockSpan(arr, 42);
    return 0;
}

/*

int c = 0;
    for (int i = 0; i < n; i++)
    {
        c++;
        if (i == 0){
            v.push_back(-1);
        }
        else{
            s.push({arr[i-1], i-1});
            while(!s.empty()){
                if (s.top().first>arr[i]){
                    v.push_back(s.top().second);
                    break;
                }
                s.pop();
            }
        }
        if (v.size()!=c){
            v.push_back(1);
        }
    }
    

*/