#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a[200000],n,x;
		cin>>n>>x;
		for(int i=0;i<n;i++) cin>>a[i];
		if(binary_search(a,a+n,x)) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}	
	return 0;
}

