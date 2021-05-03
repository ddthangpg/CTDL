#include<iostream>
using namespace std;
int m=1e9+7;
long long n,k,sum=0;
struct Matran{
	long long f[11][11];
};
Matran operator *(Matran A,Matran B){
	Matran C; int i,j,k; 
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			C.f[i][j]=0;
			for(k=0;k<n;k++)
				C.f[i][j]=(C.f[i][j]+(A.f[i][k]*B.f[k][j])%m)%m;
		}
	return C;
}
Matran pow(Matran A,int n){
	if(n==1) return A;
	Matran x=pow(A,n/2);
	if(n%2==0)return x*x;
	return x*x*A;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t;
	Matran A; cin>>t;
	while(t--){
		sum=0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin>>A.f[i][j];
		}
		Matran re=pow(A,k);
		for(int i=0;i<n;i++) sum=(sum+re.f[n-1][i])%m;
		cout<<sum<<endl;
	}
}

