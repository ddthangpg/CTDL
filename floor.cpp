#include<iostream>
#define ll long long
using namespace std;
int re(ll a[],int n,int k){
	if(a[0]>(ll)k) return -1;
	for(int i=n-1;i>=0;i--){
		if(a[i]<=k) return i+1;
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,ok=0,k; cin>>n>>k;
		ll *a=new ll[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<re(a,n,k)<<endl;
	}
	return 0;
}

