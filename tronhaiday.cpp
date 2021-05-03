#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int *a=new int[n+k];
		for(int i=0;i<n+k;i++) cin>>a[i];
		sort(a,a+n+k);
		for(int i=0;i<n+k;i++) cout<<a[i]<<" ";
		cout<<endl;
		delete a;
	}
	return 0;
}

