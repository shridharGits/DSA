#include <bits/stdc++.h>
using namespace std;

// Biotonic array = it increases first continuesly and then decreases

int findPeak(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        int mid = i + (j - i) / 2;

        if (mid != 0 && mid != n - 1)
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                return arr[mid];
            }
            else if (arr[mid] < arr[mid + 1])
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
        else if(mid == 0){
            if(arr[mid]<arr[mid+1]){
                return mid;
            }
            else{
                return mid+1;
            }
        }
        else{
            if(arr[mid]>arr[mid-1]){
                return mid;
            }
            else{
                return mid-1;
            }
        }
    }
}

int main()
{
    int arr[] = {1,3,12,8,4,2};
    cout<<findPeak(arr,6);
    return 0;
}