#include<bits/stdc++.h>
using namespace std;

void findNextLargestElement(int arr[], int n){
    vector <int> v;
    stack <int> s;
    for (int i = n-1; i >= 0; i--)
    {
        if (s.empty()){
            v.push_back(-1);
        }
        else if (!s.empty() && s.top()>arr[i]){
            v.push_back(s.top());
        }
        else if (!s.empty() && s.top() <=arr[i]){
            while(!s.empty() && s.top() <= arr[i]){
                s.pop();
            }
            if (!s.empty()){
                v.push_back(s.top());
            }
            else{
                v.push_back(-1);
            }
        }
        s.push(arr[i]);
    }
    
    

    for (int i = n-1; i >= 0; i--)
    {
        cout<<v[i]<<"   ";
    }
    
}

int main(){
    int arr[] = {1,3,2,4};
    findNextLargestElement(arr, 4);
    return 0;
}