#include<iostream>
#define ll long long
using namespace std;
ll n;
ll re;
ll a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
void try1(ll i,ll x,ll uoc){
	if(uoc==n) re=min(re,x);
	else if(uoc<n){
		for(int j=1;;j++){
			if(x*a[i]>re) break;
			x*=a[i];
			try1(i+1,x,uoc*(j+1));
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		cin>>n;
		re=1e18;
		try1(0,1,1);
		cout<<re<<endl;
	}	
	return 0;
}

