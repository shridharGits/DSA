#include<bits/stdc++.h>
using namespace std;

int sumOfElements(int *a){   /*same as int a[]*/
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main(){
    int a[] = {10,20,30,40,50};
    cout<<sumOfElements(a);

    return 0;
}