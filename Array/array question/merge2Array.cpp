#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,3,5,7};
    int b[] = {0,2,6,8,9};
    int n = 4;
    int m = 5;
    int gap = ceil((n+m)/2);
	    while(gap >= 1){
            cout<<gap<<endl;
	        int i = 0;
	        while(i<n+m){
                    if (a[i] > b[i+gap]){
                    swap(a[i], b[i+gap]);
                }
                i++;
            }
	        
	        gap = (gap)/2;
	    }

    // for (int i = 0; i < 8; i++)
    // {
    //     cout<<c[i]<<", ";
    // }
    
    return 0;
}