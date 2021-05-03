#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a[1000],n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(i%2==0) cout<<a[n-1-i/2]<<" ";
			else cout<<a[i/2]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}

