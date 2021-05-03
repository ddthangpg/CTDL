#include<bits/stdc++.h>
using namespace std;
int a[11]={0},n;
pair<int,int> x;
vector<pair<int,int> >v;
stack<int> st;
set<string> se;
string s;
void Try(){
	int k=pow(2,n)-1;
	while(k--){
		string tmp="";
		int check[201]={0};
		for(int i=n-1;i>=0;i--){
			if(a[i]==0){
				a[i]=1;
				break;
			}else a[i]=0;
		}
		for(int i=0;i<n;i++){
			if(a[i]) check[v[i].first]=check[v[i].second]=1;
		}
		for(int i=0;i<s.length();i++){
			if(!check[i]) tmp+=s[i];
		}
		se.insert(tmp);
	}
}
void re(){
	set<string>::iterator it;
	for(it=se.begin();it!=se.end();it++) cout<<*it<<endl;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') st.push(i);
		if(s[i]==')'){
			x.first=st.top();
			x.second=i;
			st.pop();
			v.insert(v.begin(),x);
		}
	}
	n=v.size();
	Try();
	re();
	return 0;
}

