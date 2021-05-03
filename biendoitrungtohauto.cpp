#include<iostream>
#include<stack>
using namespace std;
int uuT(char a){		
	if(a=='+'||a=='-') return 1;
	if(a=='*'||a=='/') return 2;
	if(a=='^') return 3;
	return 0;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		stack<char> st;
		st.push('1');
		string s; 
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(') st.push(s[i]);
			else if(s[i]>='A'&&s[i]<='Z') cout<<s[i];
			else if(s[i]>='0'&&s[i]<='9') cout<<s[i];
			else if(s[i]==')'){
				while(st.top()!='('&&st.size()>1){
					cout<<st.top();
					st.pop();					
				}
				if(st.size()>1) st.pop();
			}
			else if(s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-'||s[i]=='^'){
				
				while(uuT(s[i])<=uuT(st.top())&&st.size()>1){
					cout<<st.top();
					st.pop();
				}
				st.push(s[i]);
			}
		}
		while(st.size()>1){
			if(st.top()!='(') cout<<st.top();
			st.pop();
		}
		cout<<endl;
	}
	return 0;
}

