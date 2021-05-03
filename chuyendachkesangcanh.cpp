#include<iostream>
#include<vector>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int n; string s;
	cin>>n;
	cin.ignore();
	vector<int> re[n+1];
	for(int i=1;i<=n;i++){
		getline(cin,s);
		int k=0;
		for(int j=0;j<s.length();j++){
			if(s[j]!=' '){
				k=k*10+s[j]-'0';
			}
			if(s[j]==' '||j==s.length()-1){
				re[i].push_back(k);
				k=0;
			}
		}
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<re[i].size();j++){
			if(re[i][j]>i) cout<<i<<" "<<re[i][j]<<endl;
		}
	}
	return 0;
}

