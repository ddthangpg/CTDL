#include<iostream>
#include<vector>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,k,a,b;
		cin>>n>>k;
		vector<int> v[n+1];
		for(int i=0;i<k;i++){
			cin>>a>>b;
			v[a].push_back(b);
		}
		for(int i=1;i<=n;i++){
			cout<<i<<": ";
			for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}

