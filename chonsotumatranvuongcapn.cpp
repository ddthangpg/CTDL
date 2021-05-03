#include<bits/stdc++.h>
using namespace std;
int n,a[123445],k,b[123][123],dem=0;bool ending=0;vector<int>kq;
void In(){
	int sum=0;
	for(int i=1; i<=n; i++){
		sum+=b[i][a[i]];
	}
	if(sum==k){
		dem++;
		for(int i=1; i<=n; i++)
			kq.push_back(a[i]);
	}
	
}
void Sinh(){
	int i=n;
	while(i>0 && a[i]<a[i-1]) i--;
	i--;
	if(i==0){
		ending=1;
		return;
	}
	int j=n;
	while(a[j]<a[i]) j--;
	swap(a[i],a[j]);
	reverse(a+i+1,a+n+1);
}
int main(){
	cin>>n>>k;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			cin>>b[i][j];
	dem=0;kq.clear();
	ending=0;
	for(int i=1; i<=n; i++)
		a[i]=i;
	while(!ending){
		In();
		Sinh();
	}
	cout<<dem<<endl;
	for(int i=0; i<kq.size(); i++){
		cout<<kq[i]<<" ";
		if((i+1)%n==0) cout<<endl;
	}
	cout<<endl;
}
