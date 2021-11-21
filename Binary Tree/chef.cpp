#include<iostream>
using namespace std;

int main(){
    // int t;
	// cin>>t;
	// while(t--){
	    int x,y;
	    cin>>x>>y;
	    int minNumber = min(x, y);
	    int maxNumber = max(x, y);
	    
	    // if (maxNumber%minNumber == 0){
	    //     cout<<0<<endl;
	    // }
	    // else{/
	        int c1 = 0;
    	    int c2 = 0;
    	    while(maxNumber%minNumber!=0){
				// cout<<"hey"<<endl;
    	        c1++;
    	        maxNumber++;
    	    }
			// cout<<"hello";
    	    while(maxNumber%minNumber!=0){
				
				
    	        minNumber++;
    	    }
	        cout<<min(c1,c2)<<endl;
	    // }
	// }
    return 0;
}