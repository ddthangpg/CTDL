#include<iostream>
using namespace std;
string s;
void sinh(int n){
	int ok=1;
	while(ok){
		for(int i=0;i<n;i++) cout<<s[i];
		cout<<" ";
		ok=0;
		for(int i=n-1;i>=0;i--){
			if(s[i]=='A'){
				ok=1; s[i]='B'; break;
			}else s[i]='A';
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		s="AAAAAAAAAA";
		sinh(n);
		cout<<endl;
	}	
	return 0;
}

