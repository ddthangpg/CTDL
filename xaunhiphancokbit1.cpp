#include<iostream>
using namespace std;
int ok=1,k;
void in(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<endl;
}
int check1(int a[],int k,int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]==1) count++;
	} if(count==k) return 1;
	return 0;
}
void sinh(int a[],int n){
	ok=0;
	if(check1(a,k,n)) in(a,n);
	for(int i=n-1;i>=0;i--){
		if(a[i]==0){
			ok=1; a[i]=1;  break;
		}else a[i]=0;
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,a[21]={0};
		ok=1;
		cin>>n>>k;
		while(ok) sinh(a,n);
	}
	return 0;
}

