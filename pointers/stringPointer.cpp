#include<bits/stdc++.h>
using namespace std;

// void printArray(char *c){
//     int i = 0;
//     while(c[i]!='\0'){
//         cout<<c[i]<<endl;
//         i++; 
//     }
// }
// void printArray(char *c){
//     while(*c!='\0'){
//         cout<<*c<<endl;
//         c++;
//     }
// }

int main(){
    char c[5];
    c[0] = 'j';
    c[1] = 'o';
    c[2] = 'h';
    c[3] = 'n';
    c[4] = '\0';
    cout<<c<<endl;
    // cout<<c<<endl;  // output: john≡↓@
    // // since we have not alloted extra space to char c[4] to denote null character
    // // i.e end of string (\0)
    // printArray(c);
    // string s = "hello";
    // // char **;
    // cout<<&(s)+1  <<endl;
    int arr[4] = {1,2,3,4};
    // cout<<&(*(arr))+1<<endl;
    // cout<<arr+2<<endl;
    // cout<<arr+3<<endl;
    cout<<arr<<endl;
    return 0;
}