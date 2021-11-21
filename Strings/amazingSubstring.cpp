#include <bits/stdc++.h>
using namespace std;

vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{
    string s  = "";
    for (int i = 0; i < pattern.length(); i++)
    {
        if (pattern[i] == pattern[i + 1])
        {
            s += '1';
        }
        else
            s += '0';
    }
    cout<<s;
}

int main()
{
    vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb";
    findAndReplacePattern(words, pattern);
    return 0;
}

/*
len = 1;
i = 0 to 3
j = 0 + 4 -
*/