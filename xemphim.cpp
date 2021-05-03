#include<iostream>
#include<vector>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int s,n,a[50000];
	cin>>s>>n;
	vector< vector<int> > dp(n+1,vector<int> (s+1,0));
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=s;j++){
			if(j>=a[i]) dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+a[i]);
			else dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[n][s];
	return 0;
}
