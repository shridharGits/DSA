#include<bits/stdc++.h>
using namespace std;

int main(){
    char textInput[] = "a#@ a234bc@ sad$ hsagd^\n";
    int c = 0;
    int len = 0;
    for (int i = 0; textInput[i]!='\n'; i++)
    {
        if((textInput[i]>='a' && textInput[i]<='z') || (textInput[i]>='A'  && textInput[i]<='Z') || (textInput[i]>='0' && textInput[i]<='9') || textInput[i]==' '){
            c++;
        }
        len++;
    }

    int ans = len -c ;
    return ans;
    
    return 0;
}