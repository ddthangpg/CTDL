#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int> >re;
vector<int> v;
int a[21],n,k;
void bTr(int i,int sum){
	if(sum==k) re.push_back(v);
	else if(sum<k){
		for(int j=i;j<n;j++){
			if(sum+a[j]<=k){
				v.push_back(a[j]);
				bTr(j,sum+a[j]);
				v.pop_back();
			}
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		re.clear();
		v.clear();
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		bTr(0,0);
		if(re.size()==0) cout<<"-1";
		for(int i=0;i<re.size();i++){
			cout<<"[";
			for(int j=0;j<re[i].size()-1;j++) cout<<re[i][j]<<" ";
			cout<<re[i][re[i].size()-1]<<"]";
		}
		cout<<endl;
	}
	return 0;
}

