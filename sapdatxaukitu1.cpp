#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[150]={0};
		int n=s.length(),k=0;
		for(int i=0;i<s.length();i++) a[s[i]]++;
		for(int i='a';i<='z';i++) k=max(a[i],k);
//		if(n%2==0){
//			if(k<=n/2) cout<<"1"<<endl;
//			else cout<<"-1"<<endl;
//		}else{
//			if(k<=n/2+1) cout<<"1"<<endl;
//			else cout<<"-1"<<endl;
//		}
		if(k<=n/2+n%2) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}	
	return 0;
}
