#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		stack<int> st;
		for(int i=s.length()-1;i>=0;i--){
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='^'||s[i]=='/'){
				int k,a,b;
				a=st.top(); st.pop();
				b=st.top(); st.pop();
				if(s[i]=='+') k=a+b;
				if(s[i]=='-') k=a-b;
				if(s[i]=='*') k=a*b;
				if(s[i]=='/') k=a/b;
				if(s[i]=='^') k=pow(a,b);
				st.push(k);
			} else st.push(s[i]-'0');
		}
		cout<<st.top()<<endl;
	}	
	return 0;
}

