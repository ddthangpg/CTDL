#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,k,count=0; cin>>n>>k;
		int *a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==k) count++;
		}
		if(count>0) cout<<count<<endl;
		else cout<<"-1"<<endl;
		delete a;
	}
	return 0;
}

