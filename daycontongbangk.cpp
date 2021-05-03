#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n,k,a[11],socuoi,cc[11],ok=0;
int check(){
	int sum=0;
	for(int j=0;j<n;j++){
		if(cc[j]==1){
			sum+=a[j];
			socuoi=j;
		}
	}
	if(sum==k) return 1;
	return 0;
}
void inKQ(){
	if(check()){
		ok=1;
		cout<<"[";
		for(int j=0;j<n;j++){
			if(cc[j]==1){
				cout<<a[j];
				if(j!=socuoi) cout<<" ";
			}
		}
		cout<<"]";
		cout<<" ";
	}
}
void try1(int i){
	for(int j=1;j>=0;j--){
		cc[i]=j;
		if(i==n-1) inKQ();
		else try1(i+1);
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		ok=0;
		memset(cc,0,11);
		cin>>n>>k;
		for(int j=0;j<n;j++) cin>>a[j];
		sort(a,a+n);
		try1(0);
		if(ok==0) cout<<"-1";
		cout<<endl;
	}
	return 0;
}

