#include<iostream>
#include<stack>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		stack<char> st;
		for(int i=0;i<s.size();i++){
			if(s[i]=='('||(s[i]==')'&&st.size()==0)) st.push(s[i]);
			else{
				if(st.top()=='(') st.pop();
				else st.push(s[i]);
			}
		}
		int a=0,b=0;
		while(!st.empty()){
			if(st.top()==')') b++;
			else a++;
			st.pop();
		}
		cout<<a/2+b/2+a%2+b%2<<endl;
	}
	return 0;
}

