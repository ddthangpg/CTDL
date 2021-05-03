#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long *a=new long long[n],*b=new long long[n];
		int ok=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			cin>>b[i];
			if(!ok){
				if(b[i]!=a[i]){
					ok=1; 
					cout<<i+1<<endl;
				}
			}
		}
	}	
	return 0;
}

