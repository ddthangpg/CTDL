#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int f[501][501],a[501][501],ok=0,re=-1;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>a[i][j],f[i][j]=a[i][j];
				
		for(int i=2;i<=n;i++){
			for(int j=2;j<=m;j++){
				if(a[i][j]&&a[i-1][j]&&a[i][j-1]&&a[i-1][j-1])
					f[i][j]=min(f[i-1][j-1],min(f[i][j-1],f[i-1][j]))+1;
				re=max(re,f[i][j]);
			}
		}
		cout<<re<<endl;		
	}
	return 0;
}

