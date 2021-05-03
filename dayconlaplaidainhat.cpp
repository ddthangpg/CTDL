#include<iostream>
#include<cstring>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		int f[n+1][n+1];
		memset(f,0,sizeof(f));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(s[i-1]==s[j-1]&&i!=j) f[i][j]=f[i-1][j-1]+1;
				else f[i][j]=max(f[i-1][j],f[i][j-1]);
			}
		}
		cout<<f[n][n]<<endl;
	}	
	return 0;
}

