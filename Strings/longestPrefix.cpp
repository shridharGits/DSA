#include<bits/stdc++.h>
using namespace std;

string longestPrefix(vector <string> A){
    int minLength = 10000;
    string p;

    // take the smallest element and its length
    for (int i = 0; i<A.size(); i++){
        int strLength = A[i].length();
        if (strLength < minLength){
            minLength = strLength;
            p = A[i];
        }
    }

    // see how many charaters are same;
    vector <int> v;
    for (int i = 0; i < A.size(); i++)
    {
        int c = 0;
        for (int j = 0; j < minLength; j++)
        {
            if (A[i][j] == p[j]){
                c++;
            }
            
        }
        v.push_back(c);
        
    }

    // take the smalles count;
    int minSameChars = 10000;
    for (int i = 0; i < v.size(); i++)
    {
        minSameChars = min(minSameChars, v[i]);
    }


    // run the loop for smallest number of times and get those characters from any number of strings;
    string s ="";
    for (int i = 0; i < minSameChars; i++)
    {
        s += A[0][i];
    }
    
    
    return s;
    
}

int main(){
    vector <string> A = {"abab", "ab", "abcd"};
    cout<<longestPrefix(A);
    return 0;
}


// "abcdefgh", "aefghijk", "abcefgh"
// "abab", "ab", "abcd" 