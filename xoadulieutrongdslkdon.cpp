#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int n; cin>>n;
	int a[n+1],k;
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>k;
	for(int i=0;i<n;i++){
		if(a[i]!=k) cout<<a[i]<<" ";
	}	
	return 0;
}

