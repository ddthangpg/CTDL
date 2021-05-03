#include<iostream>
using namespace std;
int re(string s){
	int n=s.length();
	if(s[0]=='0') return 0;
	for(int i=1;i<n;i++){
		if(s[i]=='0'&&s[i-1]>'2') return 0;
	}
	int f[n+1]={0};
	f[0]=1;
	f[1]=1;
	for(int i=2;i<=n;i++){
		if(s[i-1]>'0') f[i]=f[i-1];
		if(s[i-2]=='1'||s[i-2]=='2'&&s[i-1]<'7') f[i]+=f[i-2];
	}
	return f[n];
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<re(s)<<endl;
	}
	return 0;
}
