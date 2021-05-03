#include<iostream>
using namespace std;
int n,a[1001],k,m=1e9+7;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		long long f[1001]={1};
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=k;i++){
			for(int j=1;j<=n;j++){
				if(i>=a[j]) f[i]=(f[i]+f[i-a[j]])%m;
			}
		}
		cout<<f[k]<<endl;
	}	
	return 0;
}
