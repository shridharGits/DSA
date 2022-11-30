#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[]){
    for (int i = 0; i < ds.size(); i++)
    {
        cout<<ds[i]<<" ";
    }
    cout<<endl;
    if(ds.size() == nums.size()){
        ans.push_back(ds);
        return;
    }
    for(int i = 0; i<nums.size(); i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            solve(ds,nums,ans,freq);
            freq[i]=0;
            ds.pop_back();
        }
    }
}

int main(){
    vector<int> nums = {1,2,3};     // will have 3! = 6 permutations;
    vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i= 0; i<nums.size(); i++){
            freq[i] = 0;
        }
        solve(ds,nums,ans,freq);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[0].size(); j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        
    return 0;
}