#include<iostream>
#include<deque>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int n; cin>>n;
	cin.ignore();
	string s;
	deque<int> qq;
	while(getline(cin,s)){
		if(s.find("PUSHFRONT")==0){
			int y=0;
			for(int i=10;i<s.size();i++) y=y*10+s[i]-'0';
			qq.push_front(y);
		}		
		if(s.find("PUSHBACK")==0){
			int y=0;
			for(int i=9;i<s.size();i++) y=y*10+s[i]-'0';
			qq.push_back(y);
		}
		if(s.find("PRINTFRONT")==0){
			if(qq.empty()) cout<<"NONE"<<endl;
			else cout<<qq.front()<<endl;
		}
		if(s.find("PRINTBACK")==0){
			if(qq.empty()) cout<<"NONE"<<endl;
			else cout<<qq.back()<<endl;
		}		
		if(s.find("POPFRONT")==0){
			if(!qq.empty()) qq.pop_front();
		}
		if(s.find("POPBACK")==0){
			if(!qq.empty()) qq.pop_back();
		}		
	}
	return 0;
}

