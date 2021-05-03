#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	long long f[26][26];
	for(int i=0;i<=25;i++){
		f[0][i]=1;
		f[i][0]=1;
	}
	for(int i=1;i<=25;i++)
		for(int j=1;j<=25;j++)
			f[i][j]=f[i][j-1]+f[i-1][j];
	while(t--){
		int x,y;
		cin>>x>>y;
		cout<<f[x][y]<<endl;
	}
	return 0;
}

