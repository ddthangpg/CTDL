#include<iostream>
#include<vector>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		vector<int> v;
		v.push_back(1);
		cout<<"1 ";
		int n; cin>>n;
		n--;
		int l=1,ok=0;
		while(n--){
			ok=0;
			for(int i=v.size()-1;i>=0;i--){
				if(v[i]==0){
					ok=1;
					v[i]=1;
					for(int j=i+1;j<v.size();j++) v[j]=0;
					break;
				}
			}
			if(!ok){
				v[0]=1;
				for(int i=1;i<v.size();i++) v[i]=0;
				v.push_back(0);
			}
			for(int i=0;i<v.size();i++) cout<<v[i];
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
