#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "abcddcbsa";
    int k = 2;
    string s = "";
    int i = 0;
    int j = 0;
    for (int i = 0; i < A.length(); i++)
    {
        int j = i;
        int c = 0;
        while(A[i] == A[j]){
            j++;
            c++;
        }
        j--;
        if (c!=k){
            s+=A[i];
        }
        i = j;
    }
    
    

    cout<<s;


    return 0;
}

/*
//meth 1
string A = "abcddcbsa";
    int k = 2;
    int hash[200];
    // for (int i = 0; i < 200; i++)
    // {
    //     hash[i] = 0;
    // }
    
    for (int i = 0; i<A.length(); i++){
        hash[(int)A[i]]++;
    }

    string s = "";
    for (int i = 0; i < 200; i++)
    {
        if (hash[i] != k && hash[i]!=0){
            s += char(i);
        }
    }
    
    // cout<<s;

*/