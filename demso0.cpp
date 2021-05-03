#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,a[2000],ok=1; cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(ok){
				if(a[i]==1){
					cout<<i<<endl;
					ok=0;
				}
			}
		}
		if(ok==1) cout<<"0"<<endl;
	}	
	return 0;
}

