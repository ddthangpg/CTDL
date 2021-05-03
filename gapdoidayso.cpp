#include<iostream>
#include<cmath>
using namespace std;
int re(int n,long long k){
	if(k%2==1) return 1;
	if(k%4==2) return 2;
	long long x=pow(2,n-1);
	if(k==x) return n;
	if(k>x) return re(n-1,x*2-k);
	return re(n-1,k);
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; long long k;
		cin>>n>>k;
		cout<<re(n,k)<<endl;
	}	
	return 0;
}


