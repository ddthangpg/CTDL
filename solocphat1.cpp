#include<iostream>
using namespace std;
void try1(int i,int n,int a[]){
	for(int j=8;j>=6;j-=2){
		a[i]=j;
		if(i==n-1){
			for(int k=0;k<n;k++) cout<<a[k];
			cout<<" ";
		}
		else try1(i+1,n,a);
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a[100];
		int n; cin>>n;
		for(int m=n;m>=1;m--){
			try1(0,m,a);
		}
		cout<<endl;
	}
	return 0;
}

