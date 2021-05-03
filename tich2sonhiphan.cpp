#include<iostream>
#include<cmath>
using namespace std;
long long cv(string a){
	long long n=0;
	int k=a.size();
	for(int i=k-1;i>=0;i--){
		if(a[i]=='1') n+=pow(2,k-i-1);
	}
	return n;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		long long n1=cv(a),n2=cv(b);
		cout<<n1*n2<<endl;
	}
	return 0;
}

