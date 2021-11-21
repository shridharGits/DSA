#include<iostream>
using namespace std;

int main(){
    // int t;
	// cin>>t;
	// while(t--){
	    int n,d;
	    // cin>>n>>d;
        n = 5;
        d = 2;
	    int arr[n+d] = {1,2,3,4,5};
	    // taking input in array
	    // for (int i = 0; i<n; i++){
	    //     cin>>arr[i];
	    // }
	   // shifting d elements from starting to end
	    for (int i = 0; i<d; i++){
	        arr[n+i] = arr[i];
	    }
	    // shifting remaining element to start
	   for (int i = d; i<n+d; i++){
	       arr[i-d] = arr[i];
	   }
	    for (int i = 0; i<n; i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	// }
    return 0;

    // 2 1 7 6 5 4 3 
    // 3 4 5 6 7 1 2
	
}