#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int *a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
//			if(a[i]==k) cout<<i+1;
		}
		for(int i=0;i<n;i++){
			if(a[i]==k){
				cout<<i+1<<endl;
				break;
			}
		}
//		cout<<endl;
	}	
	return 0;
}

