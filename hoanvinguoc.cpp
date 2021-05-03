#include<iostream>
using namespace std;
int a[100],n;
void inKQ(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}
void try1(int i,int check[]){
	for(int j=n;j>=1;j--){
		if(check[j]==0){
			check[j]=1;
			a[i]=j;
			if(i==n) inKQ();
			else try1(i+1,check);
			check[j]=0;
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int check[100]={0};
		cin>>n;
		try1(1,check);
		cout<<endl;
	}
	return 0;
}

