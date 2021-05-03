#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string s1,s2=""; cin>>s1;
		int n=s1.size();
		for(int i=n-1;i>=0;i--) s2+=s1[i];
		int f[100][100]={};
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(s1[i-1]==s2[j-1]) f[i][j]=f[i-1][j-1]+1;
				else f[i][j]=max(f[i][j-1],f[i-1][j]);
			}
		}
		cout<<n-f[n][n]<<endl;
	}
	return 0;
}

