#include<bits/stdc++.h>
using namespace std;

void explainMap(){
    // {key, value}
    // stores in sorted order
    // stores unique element
    map <int, int> m;
    map <int, pair<int, int>> m2;
    map <pair<int, int>, int> m3;

    m[1]= 2;    // {1,2}
    m.insert({3,1});
    m.insert({2,4});

    /*
        {
            {1,2}
            {2,4}
            {3,1}
        }
    */

   for (auto it : m)
   {
       cout<<it.first<<"    "<<it.second<<endl;
   }
   
   cout<<m[2]<<endl;    // print 4

   auto it = m.find(3);
//    cout<<*(it)<<endl;
}       

void explainMultimap(){
    // same as map, but it can store multiple keys
}
void explainUnorderedMap(){
    // same as set and unordered_set difference 
    
}

int main(){
    explainMap();
    return 0;
}