#include<iostream>
#include<stack>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		stack<int> st;
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
			if(s[i]!='('&&s[i]!=')') cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}

