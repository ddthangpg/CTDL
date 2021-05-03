#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a[11][11],n;
		cin>>n;
		cout<<"[";
		for(int i=0;i<n;i++){
			cin>>a[0][i];
			cout<<a[0][i];
			if(i!=n-1) cout<<" ";
		}
		cout<<"]"<<endl;
		for(int i=1;i<n;i++){
			cout<<"[";
			for(int j=0;j<n-i;j++){
				a[i][j]=a[i-1][j]+a[i-1][j+1];
				cout<<a[i][j];
				if(j!=n-i-1) cout<<" ";
			}
			cout<<"]"<<endl;
		}
	}	
	return 0;
}

