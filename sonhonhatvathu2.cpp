#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		if(a[0]==a[1]) cout<<"-1"<<endl;
		else cout<<a[0]<<" "<<a[1]<<endl;
		delete a;
	}
	return 0;
}

