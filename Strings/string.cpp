#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "12:45:54PM";
    // cout<<s[8];

    string p = "";
    string q = "";
    p = p + s[8];
    p = p + s[9];
    if (p == "PM")
    {
        string b = "";
        b += s[0];
        b += s[1];
        stringstream c(b);
        int x = 0;
        c >> x;
        x = x + 12;
        if (x == 24){
            q += "12";
        }
        else{
            q = q + to_string(x);
        }
        for (int i = 2; i < 8; i++)
        {
            q += s[i];
        }
        cout << q;
    }
    else
    {
        string c = "";
        c+=s[0];
        c+=s[1];
        if (c == "12"){
            q += '0';
            q += '0';
        for (int i = 2; i < 8; i++)
        {
            q += s[i];
        }
        }
        else{
            for (int i = 0; i < 8; i++)
        {
            q += s[i];
        }
        }
    }
    cout << q;
    return 0;
}