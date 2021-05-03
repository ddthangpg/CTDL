#include<iostream>
using namespace std;
int m=1e9+7;
long long re(int n,int k){
	if(k==0) return 1;
	if(k>n) return 0;
	long long f=1;
	for(int i=n-k+1;i<=n;i++){
		f*=i;
		f%=m;
	}
	return f;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<re(n,k)<<endl;
	}
	return 0;
}

