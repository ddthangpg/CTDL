#include<iostream>
#include<queue>
using namespace std;
string re(int n){
	queue<string> qq;
	qq.push("9");
	while(qq.size()>0){
		string s=qq.front();
		qq.pop();
		int t=0;
		for(int i=0;i<s.size();i++){
			t=t*10+s[i]-'0';
			t%=n;
		}
		if(t==0) return s;
		qq.push(s+"0");
		qq.push(s+"9");
	}	
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<re(n)<<endl;
	}	
	return 0;
}

