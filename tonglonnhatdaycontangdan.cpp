#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1],f[n+1],re=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++){
			f[i]=a[i];
			for(int j=1;j<i;j++){
				if(a[i]>a[j]) f[i]=max(f[i],f[j]+a[i]);
			}
			re=max(re,f[i]);
		}
		cout<<re<<endl;
	}	
	return 0;
}

