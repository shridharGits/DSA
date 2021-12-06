#include <bits/stdc++.h>
using namespace std;

void prank(long long a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] + (a[a[i]] % n) * n;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] / n;
        cout<<a[i]<<endl;
    }
}

int main()
{
    long long a[] = {0,5,1,2,4,3};
    int n = 6;
    prank(a,n);
    return 0;
}