#include<iostream>
using namespace std;
int re=1000000000,a[20][20];
int check[20]={},x[20],n,minA=re,sum=0;
void try1(int i,int j){
	for(int k=2;k<=n;k++){
		if(!check[k]){
			sum+=a[i][k];
			check[k]=1;
			if(j==n) re=min(re,sum+a[k][1]);
			else if(sum+minA<re&&j<n) try1(k,j+1);
			check[k]=0;
			sum-=a[i][k];
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			minA=min(minA,a[i][j]);
		}
	}
	check[1]=1;
	try1(1,2);
	cout<<re<<endl;
	return 0;
}

