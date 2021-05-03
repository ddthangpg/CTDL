#include<iostream>
#include<vector>
using namespace std;
struct doVat{
	int a=0,c=0;
};
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,V;
		doVat A[10000];
		cin>>n>>V;
		vector<vector<int> > f(n+1, vector<int>(V+1,0));
		for(int i=1;i<=n;i++) cin>>A[i].a;
		for(int i=1;i<=n;i++) cin>>A[i].c;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=V;j++){
				if(j>=A[i].a) f[i][j]=max(f[i-1][j],f[i-1][j-A[i].a]+A[i].c);
				else f[i][j]=f[i-1][j];
			}
		}
		cout<<f[n][V]<<endl;
	}
	return 0;
}

