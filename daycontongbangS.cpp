#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a[300],n,s,t;
		cin>>n>>s;
		for(int i=0;i<n;i++) cin>>a[i];
		int l[50000]={0};
		l[0]=1;
		for(int i=0;i<n;i++){
			for(int t=s;t>=a[i];t--){
				if(l[t-a[i]]==1) l[t]=1;
			}
		}
		if(l[s]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}	
	return 0;
}
