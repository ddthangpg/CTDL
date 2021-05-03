#include<iostream>
#include<vector>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cin.ignore();
		vector<int> qq;
		while(n--){
			string s;
			getline(cin,s);
			int x=s[0]-'0';
			if(x==1) cout<<qq.size()<<endl;
			if(x==2){
				if(qq.size()>0) cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
			}
			if(x==3){
				int y=0;
				for(int i=2;i<s.size();i++) y=y*10+s[i]-'0';
				qq.push_back(y);
			}
			if(x==4){
				if(qq.size()>0) qq.erase(qq.begin());
			}
			if(x==5){
				if(qq.size()==0) cout<<"-1"<<endl;
				else cout<<qq[0]<<endl;
			}
			if(x==6){
				if(qq.size()==0) cout<<"-1"<<endl;
				else cout<<qq[qq.size()-1]<<endl;
			}			
		}
	}
	return 0;
}

