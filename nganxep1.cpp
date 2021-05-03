#include<iostream>
#include<vector>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	vector<int> v;
	string s;
	
	while(getline(cin,s)){
//		getline(cin,s);
		if(s.find("push")==0){
			int n=0;
			for(int i=0;i<s.size();i++){
				if(s[i]>='0'&&s[i]<='9') n=n*10+s[i]-'0';
			}
			v.push_back(n);
		}
		if(s.find("show")==0){
			if(v.size()==0) cout<<"empty";
			for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
			cout<<endl;
		}
		if(s.find("pop")==0) v.pop_back();
	}
	return 0;
}
