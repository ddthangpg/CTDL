#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a[11][11],n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[0][i];
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<n-i;j++){
				a[i][j]=a[i-1][j]+a[i-1][j+1];
			}
		}
		for(int i=n-1;i>=0;i--){
			cout<<"[";
			for(int j=0;j<n-i;j++){
				cout<<a[i][j];
				if(j!=n-i-1) cout<<" ";
			}
			cout<<"]"<<" ";
		}
		cout<<endl;
	}
	return 0;
}

