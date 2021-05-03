#include<iostream>
#include<cmath>
using namespace std;
void re(int a[],int n){
	int sum=10000000;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i]+a[j])<abs(sum)) sum=a[i]+a[j];
		}
	}
	cout<<sum<<endl;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,a[1001],sum=1000000;
		cin>>n;
		re(a,n);
	}
	return 0;
}

