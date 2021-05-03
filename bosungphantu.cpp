#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n;cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int count=a[n-1]-a[0];
		for(int i=0;i<n-1;i++){
			if(a[i]!=a[i+1]) count--;
		}
		cout<<count<<endl;
		delete a;
	}
	return 0;
}

