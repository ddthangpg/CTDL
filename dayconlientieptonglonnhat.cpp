#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a[101],n;
		cin>>n;
		int sum=0,re=-1000000;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			if(sum<0) sum=0;
			sum+=a[i];
			re=max(re,sum);
		}
		cout<<re<<endl;
	}	
	return 0;
}

