#include<bits/stdc++.h>
using namespace std;
//int k;
//bool ss(int a,int b){
//	return (abs(a-k)<abs(b-k)) ? 1 : 0 ;
//}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t,k; cin>>t;
	while(t--){
		int a[10000],n;
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			for(int j=0;j<n-i-1;j++){
				if(abs(a[j]-k)>abs(a[j+1]-k)) swap(a[j],a[j+1]);
			}
		}
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}

