#include<iostream>
#include<vector>
#define ll long long
using namespace std;
vector<ll> v;
void ptich(ll a,ll b){
	if(b%a==0) v.push_back(b/a);
	else{
		ll x=b/a+1;
		v.push_back(x);
		ptich(a*x-b,b*x);
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		ll a,b; cin>>a>>b;
		ptich(a,b);
		for(int i=0;i<v.size()-1;i++) cout<<"1/"<<v[i]<<" + ";
		cout<<"1/"<<v[v.size()-1]<<endl;
		v.clear();
	}
	return 0;
}

