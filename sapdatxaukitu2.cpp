#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int kc;
		cin>>kc;
		string s;
		cin>>s;
		int a[150]={0};
		int n=s.length(),k=0;
		for(int i=0;i<s.length();i++) a[s[i]]++;
		
		for(int i='A';i<='z';i++) k=max(a[i],k);
		
		if(n>=(k*(kc-1)+1)) cout<<'1'<<endl;
		else cout<<"-1"<<endl;
	}	
	return 0;
}
