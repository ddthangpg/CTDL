#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		int re=0;
		int k=s.size();
		for(int i=0;i<s.size();i++){
			if(s[i]>'1'){
				for(int j=i;j<k;j++) s[j]='1';
				break;
			}
		}
		for(int i=k-1;i>=0;i--){
			if(s[i]=='1') re+=pow(2,k-i-1);
		}
		cout<<re<<endl;
	}	
	return 0;
}


