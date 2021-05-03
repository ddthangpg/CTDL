#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int re(int a[],int n,int k){
	sort(a,a+n);
	if(k>n/2) k=n-k;
	int sum1=0,sum2=0;
	for(int i=0;i<k;i++) sum1+=a[i];
	for(int i=k;i<n;i++) sum2+=a[i];
	return abs(sum2-sum1);
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,k,a[100]; cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<re(a,n,k)<<endl;
	}	
	return 0;
}

