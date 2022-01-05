#include<bits/stdc++.h>
using namespace std;

// vector<int> v;
int arr[] = {3,6};

// void printAll(int index){
//     if(index == 3){
        
//         for (int i = 0; i < v.size(); i++)
//         {
//             cout<<v[i]<<"";
//         }
//         cout<<endl;
//         return;
//     }
//     v.push_back(arr[index]);
//     printAll(index+1);
//     v.pop_back();
//     printAll(index+1);
// }

void printSubsets(int i, int n, int sum, int k, vector<int> &v){
    if(i == n){
        if(v.size()!=0 && sum%k == 0){
            for (int i = 0; i < v.size(); i++)
            {
                cout<<v[i]<<"";
            }
            cout<<endl;
        }
    }
    v.push_back(arr[i]);
    sum = sum + arr[i];
    printSubsets(i+1, n, sum, k,v);
    v.pop_back();
    sum= sum- arr[i];
    printSubsets(i+1,n,sum,k,v);
}

int countSubset(int i, int sum, int n, int k){
    if(i == n){
        if(sum%k == 0){
            return 1;
        }
    }
    else{
    sum+=arr[i];
    int a = countSubset(i+1,sum,n,k);
    sum -= arr[i];
    int b = countSubset(i+1,sum,n,k);
    return a+b;
    }
}
int main(){
    // printAll(0);
    // vector<int> v;
    // printSubsets(0, 3, 0,3,v);
    cout<<countSubset(0, 0, 2,3);
    return 0;
}