#include<bits/stdc++.h>
using namespace std;

int main(){
    string a[]={"ghi", "ghi", "aaa", "ghi", "ghi", "ghi", "ghi"};
    map <string, int> m;

    for (int i = 0; i < 7; i++)
    {
        m[a[i]]++;
    }

    for (auto it:m)
    {
        cout<<it.first<<"   "<<it.second<<endl;
    }
    
    



    return 0;
}