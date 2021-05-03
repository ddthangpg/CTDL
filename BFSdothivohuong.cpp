#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int f[1001][1001],V,E,u;
int check1[1001];
void BFS(int u){
	queue<int> qq;
	cout<<u<<" ";
	qq.push(u);
	check1[u]=1;
	while(!qq.empty()){
		int s=qq.front();
		qq.pop();
		for(int i=1;i<=V;i++){
			if(check1[i]==0&&f[s][i]==1){
				cout<<i<<" ";
				qq.push(i);
				check1[i]=1;
			}
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		cin>>V>>E>>u;
		memset(f,0,sizeof(f));
		memset(check1,0,sizeof(check1));
		while(E--){
			int x,y;
			cin>>x>>y;
			f[x][y]=1;
			f[y][x]=1;
		}
		BFS(u);
		cout<<endl;
	}
	return 0;
}

