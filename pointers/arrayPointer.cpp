#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p = a; // array name itself contains the address
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    cout << *(p + 4) << endl;

    return 0;
}