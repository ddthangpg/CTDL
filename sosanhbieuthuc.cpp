#include<iostream>
#include<stack>
using namespace std;
string bdoi(string s){
	stack<int> st;
	string k="";
	for(int i=0;i<s.size();i++){
		if(s[i]=='(') st.push(i);
		else if(s[i]==')'){
			int a=st.top(); st.pop();
			if(a>0){
				if(s[a-1]=='-'){
					for(int j=a+1;j<i;j++){
						if(s[j]=='+') s[j]='-';
						else if(s[j]=='-') s[j]='+';
					}
				}
			}
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!='('&&s[i]!=')') k+=s[i];
	}
	return k;	
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string s1,s2; cin>>s1>>s2;
		s1=bdoi(s1);
		s2=bdoi(s2);
		if(s1==s2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

