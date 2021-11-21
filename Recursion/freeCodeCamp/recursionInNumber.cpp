#include<iostream>
using namespace std;

// decimal to binary converter
string decimalToBinary(int decimal, string result){
    if (decimal == 0){
        return result;
    }
    result = to_string(decimal%2) + result;
    return decimalToBinary(decimal/2, result);
}

// sum of natural numbers
// int sumofN(int number){
//     if (number == 0){
//         return 0;
//     }
//     return sumofN(number-1, sum) + sum + number;
// }


void print(int n){
    if (n == 0){
        cout<<0;
    }
    cout<<n<<endl;
    print(n-1);
}

int main(){
    // cout<<decimalToBinary(233,"");


    // cout<<sumofN(10, 0);
    print(10);
    return 0;
}