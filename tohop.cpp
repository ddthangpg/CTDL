#include<iostream>
using namespace std;
int m=1e9+7;
int re(int n,int r,int a[]){
	if(r>n-r) r=n-r;
	a[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=min(i,r);j>0;j--)
		a[j]=(a[j]+a[j-1])%m;
	}
	return a[r];
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,r,a[1001]={0};
		cin>>n>>r;
		cout<<re(n,r,a)<<endl;
	}
	return 0;
}

