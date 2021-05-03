#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001],E;
int check[1001]={};
void DFS(int u){
    stack<int>st;
    check[u]=1;
    st.push(u);
    while(!st.empty()){
        int s=st.top();
        st.pop();
        for(int j=1;j<=n;j++){
            if(a[s][j]==1&&check[j]==0){
                check[j]=1;
                st.push(s);
                st.push(j);
                break;
            }
        }
    }
}
//void BFS(int u){
//	queue<int> qq;
//	qq.push(u);
//	check[u]=1;
//	while(!qq.empty()){
//		int s=qq.front();
//		qq.pop();
//		for(int i=1;i<=n;i++){
//			if(check[i]==0&&a[s][i]==1){
//				qq.push(i);
//				check[i]=1;
//			}
//		}
//	}
//}
void re(int x[],int y[]){
    for(int i=1;i<=E;i++){
	    a[x[i]][y[i]]=a[y[i]][x[i]]=0;
		memset(check,0,sizeof(check));
		DFS(1);
		for(int k=1;k<=n;k++){
			if(check[k]==0){
		        cout<<x[i]<<" "<<y[i]<<" ";
		        break;
			}
		}
		a[x[i]][y[i]]=a[y[i]][x[i]]=1;					
    }
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
	    cin>>n>>E;
	    int x[E+1],y[E+1];
	    memset(a,0,sizeof(a));
	    for(int i=1;i<=E;i++){
	    	cin>>x[i]>>y[i];
	    	a[x[i]][y[i]]=1;
	    	a[y[i]][x[i]]=1;
		}
	    re(x,y);
		cout<<endl;        
	}
    return 0;
}


0 1 1 0 0
1 0 1 0 1
1 1 0 0 1
0 0 0 0 0
0 1 1 0 0
