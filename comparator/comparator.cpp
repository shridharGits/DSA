#include<bits/stdc++.h>
using namespace std;

// comparator to sort the arr
// bool cmp(int a, int b){
//     if(a<b){
//         return true;
//     }
//     return false;
// }

// comparator to sort vector, such that if v[i].first is not same then sort in ascending order
// else if they are same sort in descending order
// traditional way
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first){
        if(a.first < b.first){
            return true;
        }
        return false;
    }
    else{
        if(a.second > b.second){
            return true;
        }
        return false;
    }
}

// easy way
bool cmp1(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    else{
        return a.second > b.second;
    }
}

int main(){
    int arr[] = {5,8,9,4,23,71,96};
    int n = 7;

    // for(int i = 0; i<n-1; i++){
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if(arr[i] > arr[j]){         // order deciding line
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }
    // for(int i = 0; i<n-1; i++){
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if(cmp(arr[i], arr[j])){
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }

    vector<pair<int,int>> v(8);
    v = {{4,2}, {1,2}, {4,1}, {5,8}, {6,4}, {5,2}, {6, 8}, {8, 9}};

    sort(v.begin(), v.end(), cmp1);
    // inbuilt sorting algo
    // if want to swap then return false;
    // if dont want to swap return true;
    for (int i = 0; i < 8; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    return 0;
}