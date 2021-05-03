#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int check1[1001]={0};
int f[1001][1001];
int V,E;
void DFS(int n,int k){
	check1[n]=1;
	for(int i=1;i<=V;i++){
		if(f[n][i]==1&&check1[i]==0&&n!=k) DFS(i,k);
	}
}
int tplt(int j){
	int dem=0;
	for(int i=1;i<=V;i++){
		if(!check1[i]&&i!=j){
			dem++;
			if(dem>1) return 0;
			DFS(i,j);
		}
	}
	return 1;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		cin>>V>>E;
		memset(f,0,sizeof(f));
		memset(check1,0,sizeof(check1));
		while(E--){
			int a,b;
			cin>>a>>b;
			f[a][b]=1;
			f[b][a]=1;
		}
		for(int i=1;i<=V;i++){
			memset(check1,0,sizeof(check1));
			if(!tplt(i)) cout<<i<<" ";
		}
		cout<<endl;
	}	
	return 0;
}
