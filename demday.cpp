#include<iostream>
#define ll long long
using namespace std;
int m=123456789;
ll pow(int a,ll b){
	if(b==0) return 1;
	ll x=pow(a,b/2);
	if(b%2==1) return (x*x%m)*a%m;
	return x*x%m;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<pow(2,n-1)<<endl;
	}	
	return 0;
}

