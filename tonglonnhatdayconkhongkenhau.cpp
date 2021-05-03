#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		long long sum=0,re,f[n+1]={0};
		f[1]=a[1],f[2]=max(a[1],a[2]);
		for(int i=3;i<=n;i++){
			f[i]=max(f[i-1],f[i-2]+a[i]);
		}
		cout<<f[n]<<endl;
	}	
	return 0;
}

