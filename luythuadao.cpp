#include<iostream>
#define ll long long
using namespace std;
ll mm=1e9+7;
ll pow(ll a,ll b){
	if(b==0) return 1;
	ll x=pow(a,b/2);
	if(b%2==0) return x*x%mm;
	return (x*x%mm)*a%mm;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		ll m; cin>>m;
		ll mdao=0,n=m;
		while(m>0){
			mdao=mdao*10+m%10;
			m/=10;
		}
		cout<<pow(n,mdao)<<endl;
	}
	return 0;
}

