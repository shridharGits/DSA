#include<iostream>
using namespace std;

int main(){
    string s = "0100110101";
    int c = 0;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '0'){
            str += s[i];
            c++;
        }
        else if(s[i] == '1'){
            str += s[i];
            c--;
        }
        if(c == 0){
            cout<<str<<endl;
            str = "";
        }
    }
    
    return 0;
}