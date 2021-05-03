#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int *a=new int[n],*b=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				cout<<i+1<<" "; break;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(a[i]!=b[i]){
				cout<<i+1<<endl; break;
			}
		}
	}
	return 0;
}

