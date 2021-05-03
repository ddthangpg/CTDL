#include<iostream>
using namespace std;
char re(string s,long long m,long long k){
	long long l=s.size();
	long long t=k/2;
	if(m<=l) return s[m-1];
	if(m==(t+1)) return re(s,t,k/2);
	if(m>(t+1))  return re(s,m-t-1,k/2);
	if(m<=t)  return re(s,m,k/2);
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		long long n;
		string s; 
		cin>>s>>n;
		long long k=s.size();
		while(k<n) k*=2;
		if(n==0);
		else cout<<re(s,n,k)<<endl;
	}
	return 0;
}  
	



