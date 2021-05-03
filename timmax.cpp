#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
ll re(int a[],int n){
	int m=1e9+7;
	ll sum=0;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		sum+=i*a[i];
		sum%=m;
	}
	return sum;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<re(a,n)<<endl;
	}	
	return 0;
}

