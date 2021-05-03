#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		vector<int> v;
		int n,a[150]={0}; string s;
		cin>>n>>s;
		for(int i=0;i<s.size();i++) a[s[i]]++;
		for(int i=50;i<150;i++){
			if(a[i]>0) v.push_back(a[i]);
		}
		while(n--){
			sort(v.begin(),v.end());
			v[v.size()-1]--;
		}
		long long re=0;
		for(int i=0;i<v.size();i++) re+=v[i]*v[i];
		cout<<re<<endl;
	}
	return 0;
}

