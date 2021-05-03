#include<iostream>
using namespace std;
int n,k,a[100];
void inKQ(){
	for(int i=1;i<=k;i++) cout<<a[i];
	cout<<" ";
}
void sinh(int i){
	for(int j=1+a[i-1];j<=n-k+i;j++){
		a[i]=j;
		if(i==k) inKQ();
		else sinh(i+1);
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		a[0]=0;
		sinh(1);
		cout<<endl;
	}
	return 0;
}

