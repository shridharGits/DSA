#include <bits/stdc++.h>
using namespace std;

int allocateBook(int a[], int n, int minPages, int m)
{
    int count = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        if(sum>minPages){
            count++;
            sum=a[i];   
        }
        if (count > m)
        {
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    int a[] = {12,34,67,90};
    int m = 2;
    int n = 4;
    int mx = INT_MIN;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        mx = max(mx, a[i]);
    }

    int low = mx;
    int high = sum;
    int ans=-1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // cout<<mid<<endl;
        // cout<<allocateBook(a, n, mid, m)<<endl;
        if (allocateBook(a, n, mid, m)){
            // cout<<ans<<endl;
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}