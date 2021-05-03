#include<iostream>
using namespace std;
int m=1e9+7;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,k;
		long long f[100001]={0};
		cin>>n>>k;
		f[0]=f[1]=1;
		for(int i=2;i<=n;i++){
			for(int j=1;j<=min(i,k);j++){
				f[i]+=f[i-j];
				f[i]%=m;
			}
		}
		cout<<f[n]<<endl;
	}	
	return 0;
}
