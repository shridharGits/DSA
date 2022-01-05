#include <iostream>
using namespace std;


int i = 0;
int c = 0;
void subsetSum(int i,int arr[],int a, int b, int n, int sum){
	if(i == n){
		if(sum>=a && sum<=b){
			c++;
		}
		return;
	}
	sum+=arr[i];
	subsetSum(i+1,arr,a,b,n,sum);
	sum-=arr[i];
	subsetSum(i+1,arr,a,b,n,sum);
}
int main() {
	int n,a,b;
	cin>>n;
	cin>>a;
	cin>>b;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	subsetSum(0,arr,a,b,n,0);
	cout<<c<<endl;
	return 0;
}