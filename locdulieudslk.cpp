#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int check[200000]={};
	int n; 
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		if(check[a[i]]==0) cout<<a[i]<<" ";
		check[a[i]]=1;
	}
	return 0;
}

