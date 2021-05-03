#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int V,E,a[1001][1001];
int check[1001]={};
void DFS(int u){
    stack<int> st;
    check[u]=1;
    st.push(u);
    while(!st.empty()){
        int s=st.top();
        st.pop();
        for(int i=1;i<=V;i++){
            if(a[s][i]==1&&check[i]==0){
                check[i]=1;
                st.push(s);
                st.push(i);
                break;
            }
        }
    }
    
}
int ltm(){
    for(int i=1;i<=V;i++){
       	memset(check,0,sizeof(check));
        DFS(i);
        for(int j=1;j<=V;j++){
            if(check[j]==0) return 0;
        }
    }
    return 1;
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>V>>E;
		memset(check,0,sizeof(check));
		memset(a,0,sizeof(a));
		while(E--){
			int x,y;
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;			
		}
	    if(ltm()) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
    return 0;
}
