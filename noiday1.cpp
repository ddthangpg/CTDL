#include<iostream>
#include<queue>
#include<vector>
#define ll long long
int m=1e9+7;
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		ll n;cin>>n;
		vector<ll>a(n);
		for(ll i=0; i<n ;i++) cin>>a[i];		
		priority_queue<ll,vector<ll>,greater<ll> > qu(a.begin(),a.end());
		ll sum=0;
		while(qu.size()>1){
			ll n1=qu.top();  qu.pop();
			n1=(n1%m+qu.top()%m)%m;
			qu.pop();
			qu.push(n1);
			sum=(sum%m+n1%m)%m;
		}
		cout<<sum<<endl;
	}
	return 0;
}
