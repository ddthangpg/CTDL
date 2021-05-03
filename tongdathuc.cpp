#include<bits/stdc++.h>
using namespace std;
int a[10001];
stack<int>st;
void re(string s){
	int k=0;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9'){
			k=k*10+s[i]-'0';
		}else{
			if(k>0) st.push(k);
			k=0;
		}
	}
	st.push(k);
	while(st.size()){
		int x=st.top(); st.pop();
		int y=st.top(); st.pop();
		a[x]+=y;
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	cin.ignore();
	while(t--){
		vector<pair<int,int> >v;
		memset(a,0,sizeof(a));
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		re(s1); re(s2);
		for(int i=0;i<=10000;i++){
			if(a[i]>0) v.push_back({a[i],i});
		}
		for(int i=v.size()-1;i>0;i--) cout<<v[i].first<<"*x^"<<v[i].second<<" + ";
		cout<<v[0].first<<"*x^"<<v[0].second<<endl;
	}	
	return 0;
}

