#include<iostream>
#include<queue>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int n; cin>>n;
	cin.ignore();
	string s;
	queue<int> qq;
	while(getline(cin,s)){
		if(s.find("PUSH")==0){
			int y=0;
			for(int i=5;i<s.size();i++) y=y*10+s[i]-'0';
			qq.push(y);
		}
		if(s.find("PRINTFRONT")==0){
			if(qq.empty()) cout<<"NONE"<<endl;
			else cout<<qq.front()<<endl;
		}
		if(s.find("POP")==0){
			if(!qq.empty()) qq.pop();
		}
	}
	return 0;
}

