#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,m,a[100000],b[100000];
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		sort(a,a+n); sort(b,b+m);		
		int i=0,j=0;
		a[n]=b[m]=9999999;
		while(i<=n-1||j<=m-1){
			if(a[i]<b[j]){
				cout<<a[i]<<" ";
				i++;
			}else
			if(a[i]>b[j]){
				cout<<b[j]<<" ";
				j++;
			}else
			if(a[i]==b[j]){
				cout<<a[i]<<" ";
				i++; j++;
			}	
		}
		cout<<endl;
		i=j=0;
		while(i<=n-1&&j<=m-1){
			if(a[i]<b[j]) i++;
			else  if(a[i]>b[j]) j++;
			else if(a[i]==b[j]){
				cout<<a[i]<<" ";
				i++; j++;
			}
		}		
		cout<<endl;
	}	
	return 0;
}

