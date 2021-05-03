#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n,k,a[11],socuoi,cc[11],count1=0;
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
		for(int j=0;j<n;j++){
			if(cc[j]==1){
				cout<<a[j]; cout<<" ";
			}
		}
		count1++;
		cout<<endl;
	}
}
void try1(int i){
	for(int j=0;j<=1;j++){
		cc[i]=j;
		if(i==n-1) inKQ();
		else try1(i+1);
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	memset(cc,0,11);
	cin>>n>>k;
	for(int j=0;j<n;j++) cin>>a[j];
	sort(a,a+n);
	try1(0);
	cout<<count1<<endl;
	return 0;
}

