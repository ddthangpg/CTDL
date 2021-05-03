#include<iostream>
#include<stack>
using namespace std;
int uuT(char a){		
	if(a=='+'||a=='-') return 1;
	if(a=='*'||a=='/') return 2;
	if(a=='^') return 3;
	return 0;
}
int re(string s){
	stack<char> st;
	st.push('0');
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') st.push(s[i]);
		else if(s[i]==')'){
			int count=0;
			while(st.top()!='('&&st.size()>1){
				count++;
				st.pop();					
			}
			if(count==0) return 1;
			if(st.size()>1) st.pop();
		}
		else if(s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-'||s[i]=='^'){
			st.push(s[i]);
		}
	}
	return 0;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; 
		getline(cin,s);
		if(re(s)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

