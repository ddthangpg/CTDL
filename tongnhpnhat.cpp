#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
ll re(int a[],int n){
	sort(a,a+n);
	ll num1=0,num2=0;
	for(int i=0;i<n;i++){
		if(i%2==0) num1=num1*10+a[i];
		if(i%2==1) num2=num2*10+a[i];
	}
	return num1+num2;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,a[30]; cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<re(a,n)<<endl;
	}
	return 0;
}

