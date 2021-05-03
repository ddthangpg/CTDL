#include<iostream>
#include<stack>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		int re=0;
		stack<int> st;
		st.push(-1);
		for(int i=0;i<s.size();i++){
			if(s[i]=='(') st.push(i);
			else{
				st.pop();
				if(st.size()>0) re=max(re,i-st.top());
				if(st.size()==0) st.push(i);
			}
		}
		cout<<re<<endl;
	}	
	return 0;
}

