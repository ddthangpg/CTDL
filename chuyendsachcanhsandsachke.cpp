#include<iostream>
#include<vector>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int V,E,a,b;
		cin>>V>>E;
		vector<int> re[V+1];
		for(int i=0;i<E;i++){
			cin>>a>>b;
			re[a].push_back(b);
			re[b].push_back(a);
		}
		for(int i=1;i<=V;i++){
			cout<<i<<": ";
			for(int j=0;j<re[i].size();j++) cout<<re[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}

