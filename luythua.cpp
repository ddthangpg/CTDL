#include<iostream>
#define ll long long
using namespace std;
const int m=1e9+7;
ll pow(int a,int b){
	if(b==0) return 1;
	ll x=pow(a,b/2);
	if(b%2==0) return x*x%m;
	return (x*x%m)*a%m;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<pow(a,b)<<endl;
	}
	return 0;
}

