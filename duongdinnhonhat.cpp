#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int f[n+1][m+1],a[n+1][m+1];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>a[i][j];
		f[1][1]=a[1][1];		
		for(int i=2;i<=n;i++) f[i][1]=a[i][1]+f[i-1][1];
		for(int i=2;i<=m;i++) f[1][i]=a[1][i]+f[1][i-1];
		for(int i=2;i<=n;i++){
			for(int j=2;j<=m;j++){
				f[i][j]=a[i][j]+min(f[i-1][j],min(f[i][j-1],f[i-1][j-1]));
			}
		}
		cout<<f[n][m]<<endl;
	}	
	return 0;
}

