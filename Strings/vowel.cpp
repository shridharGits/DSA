#include<iostream>
using namespace std;

int vowel(string a){
    int c = 0;
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = 1; j <= a.length()-i; j++)
        {
            string s = a.substr(i,j);
                    cout<<s<<endl;
            if (((s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') || 
                (s[s.length()-1] != 'a' && s[s.length()-1] != 'e' && s[s.length()-1] != 'i' && s[s.length()-1] != 'o' & s[s.length()-1] != 'u')) ||
                ((s[s.length()-1] == 'a' || s[s.length()-1] == 'e' || s[s.length()-1] == 'i' || s[s.length()-1] == 'o' || s[s.length()-1] == 'u') && 
                (s[0] != 'a' && s[0] != 'e' && s[0] != 'i' && s[0] != 'o' && s[0] != 'u'))){
                c++;
                }
        }
        
    }
    return c;
}

int main(){
    cout<<vowel("aba");
    return 0;
}