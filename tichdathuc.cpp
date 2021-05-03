#include<iostream>
using namespace std;
int m,n,a[101],b[101];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int f[201]={};
		cin>>m>>n;
		for(int i=0;i<m;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				f[i+j]+=a[i]*b[j];
			}
		}
		for(int i=0;i<m+n-1;i++) cout<<f[i]<<" ";
		cout<<endl;
	}
	return 0;
}

