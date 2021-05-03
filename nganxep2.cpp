#include<iostream>
#include<stack>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	stack<int> v;
	string s;
	int n; cin>>n;
	cin.ignore();
	while(getline(cin,s)){
		if(s.find("PUSH")==0){
			int n=0;
			for(int i=0;i<s.size();i++){
				if(s[i]>='0'&&s[i]<='9') n=n*10+s[i]-'0';
			}
			v.push(n);
		}
		if(s.find("PRINT")==0){
			if(v.size()==0) cout<<"NONE"<<endl;
			else cout<<v.top()<<endl;
		}
		if(s.find("POP")==0){
			if(v.size()>0) v.pop();
		}
	}
	return 0;
}
