#include <bits/stdc++.h>
using namespace std;

vector<int> fromLeft(string s, char c)
{
    stack<pair<char, int>> t;
    vector<int> v;

    for (int i = 0; i < s.length(); i++)
    {
        if (t.empty())
        {
            v.push_back(100000);
        }
        else if (!t.empty() && t.top().first == s[i])
        {
            v.push_back(0);
        }
        else if (!t.empty() && t.top().first != s[i])
        {
            v.push_back(abs(t.top().second - i));
        }
        if (s[i] == c)
        {
            if (!t.empty())
            {
                t.pop();
            }
            t.push({s[i], i});
        }
    }
    for (int i = 0; v.size(); i++)
    {
        cout << v[i] << "   ";
    }
    cout <<"mera code fat gayaaaa"<< endl;
    return v;
}

vector<int> fromRight(string s, char c)
{
    stack<pair<char, int>> t;
    vector<int> v;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (t.empty())
        {
            v.push_back(100000);
        }
        else if (!t.empty() && t.top().first == s[i])
        {
            v.push_back(0);
        }
        else if (!t.empty() && t.top().first != s[i])
        {
            v.push_back(abs(t.top().second - i));
        }
        if (s[i] == c)
        {
            if (!t.empty())
            {
                t.pop();
            }
            t.push({s[i], i});
        }
    }
    reverse(v.begin(), v.end());
    // for (int i = 0; i<v.size(); i++){
    //     cout<<v[i]<<"   ";
    // }
    // cout<<endl;
    return v;
}

// vector<int> shortestToChar(string s, char c) {
//     vector<int> v;
//     // vector<int> v2 = fromRight(s,c);
    
//     // for (int i = 0; i<s.length(); i++){
//     //     v1[i] = min(v1[i], v2[i]);
//     // }
//     return v;
    
// }

int main()
{
    string s = "loveleetcode";
    char c = 'e';

    // vector<int> v;
    vector<int> v1 = fromLeft(s,c);
    // v = shortestToChar(s,c);

    return 0;
}