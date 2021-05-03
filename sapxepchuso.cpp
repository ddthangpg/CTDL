#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,a[10]={0}; cin>>n;
		long long x;
		for(int i=0;i<n;i++){
			cin>>x;
			while(x>0){
				a[x%10]++;
				x/=10;
			}
		}
		for(int i=0;i<10;i++){
			if(a[i]>0) cout<<i<<" ";
		}
		cout<<endl;
	}	
	return 0;
}

