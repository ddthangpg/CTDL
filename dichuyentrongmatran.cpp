#include<iostream>
#include<string>
using namespace std;
int ok,n,m,count=0;
void re(int a[][100],int i,int j){
	if(i==n-1&&j==m-1) count++;
	if(i+1!=n) re(a,i+1,j);
	if(j+1!=m) re(a,i,j+1);
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a[100][100];
		count=0;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>a[i][j];
		}
		re(a,0,0);
		cout<<count<<endl;
	}
	return 0;
}

