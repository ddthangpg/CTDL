#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int check1[1001]={0};
int f[1001][1001];
int V,E;
void DFS(int n){
	check1[n]=1;
	for(int i=1;i<=V;i++){
		if(f[n][i]==1&&check1[i]==0) DFS(i);
	}
}
int tplt(){
	int dem=0;
	for(int i=1;i<=V;i++){
		if(!check1[i]){
			dem++;
			DFS(i);
		}
	}
	return dem;
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
		cout<<tplt()<<endl;
	}	
	return 0;
}
