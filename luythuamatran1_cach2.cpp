#include<iostream>
using namespace std;
int m=1e9+7,n,k;
long long x[11][11],y[11][11];
void nhan(long long a[11][11],long long b[11][11]){
	long long f[11][11];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			f[i][j]=0;
			for(int k=0;k<n;k++)
				f[i][j]=(f[i][j]+(a[i][k]*b[k][j])%m)%m;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) x[i][j]=f[i][j];
	}
}
void pow(long long x[11][11],int n){
	if(n<2) return;
	pow(x,n/2);
	nhan(x,x);
	if(n%2==1) nhan(x,y);
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>x[i][j];
				y[i][j]=x[i][j];
			}
		}
		pow(x,k);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cout<<x[i][j]<<" ";
			cout<<endl;
		}		
	}
	return 0;
}

