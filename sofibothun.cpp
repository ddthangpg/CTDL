#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
struct Matran{
	long long f[2][2];
};
Matran operator *(Matran A,Matran B){
	Matran C; int i,j,k; 
	for(i=0;i<=1;i++)
		for(j=0;j<=1;j++){
			C.f[i][j]=0;
			for(k=0;k<=1;k++)
				C.f[i][j]=(C.f[i][j]+(A.f[i][k]*B.f[k][j])%M)%M;
		}
	return C;
}
Matran powerM(Matran A,int n){
	if(n==1) return A;
	Matran x=powerM(A,n/2);
	if(n%2==0)return x*x;
	return x*x*A;
}
main(){
	int t; long long n;
	Matran A; cin>>t;
	while(t--){
		cin>>n;
		A.f[0][0]=0; A.f[0][1]=1;
		A.f[1][0]=1; A.f[1][1]=1;
		Matran re=powerM(A,n-1);
		cout<<re.f[1][1]<<endl;
	}
}

