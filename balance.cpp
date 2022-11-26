#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum=0;
		cin>>n;
		int arr[n+1];
		int qs[n+1];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
			qs[i]=sum;
		}

		int sum2=0;
		int ans=-1;
		for(int i=n-1;i>=0;i--){
			sum2+=arr[i];
			if(sum2==qs[i]){
				ans=i+1;
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
