#include<bits/stdc++.h>
using namespace std;
int uuT(string a){		
	if(a=="+"||a=="-") return 1;
	if(a=="*"||a=="/") return 2;
	if(a=="^") return 3;
	return 0;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		vector<string> trungto;
		vector<string> hauto;
		stack<string> st;
		string s,k="";
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='^'||s[i]=='/'||s[i]=='('||s[i]==')'){
				if(k.size()>0) trungto.push_back(k);
				k="";
				trungto.push_back(string(1,s[i]));
			}else k+=s[i];
		}
		if(k.size()>0) trungto.push_back(k);
	//	for(int i=0;i<trungto.size();i++) cout<<trungto[i];
		st.push("..");
		for(int i=0;i<trungto.size();i++){
			if(trungto[i]=="(") st.push(trungto[i]);
			else if(trungto[i]==")"){
				while(st.top()!="("&&st.size()>1){
					hauto.push_back(st.top());
					st.pop();					
				}
				if(st.size()>1) st.pop();
			}
			else if(trungto[i]=="*"||trungto[i]=="/"||trungto[i]=="+"||trungto[i]=="-"||trungto[i]=="^"){
				
				while(uuT(trungto[i])<=uuT(st.top())&&st.size()>1){
					hauto.push_back(st.top());
					st.pop();
				}
				st.push(trungto[i]);
			}
			else st.push(trungto[i]);
		}
		while(st.size()>1){
			if(st.top()!="(") hauto.push_back(st.top());
			st.pop();
		}
		
		for(int i=0;i<hauto.size();i++) cout<<hauto[i];
	
		cout<<endl;
	}
	return 0;
}

