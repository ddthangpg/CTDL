#include<iostream>
#include<stack>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		stack<string> st;
		for(int i=0;i<s.length();i++){
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='^'||s[i]=='/'){
				string a,b,k;
				a=st.top(); st.pop();
				b=st.top(); st.pop();
				k=s[i]+b+a;
				st.push(k);
			}else st.push(string(1,s[i]));
		}
		cout<<st.top()<<endl;
	}	
	return 0;
}

