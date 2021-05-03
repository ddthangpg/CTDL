#include<iostream>
#include<algorithm>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int *a=new int[n],*b=new int[m];
		nhap(a,n);
		nhap(b,m);
		sort(a,a+n);
		sort(b,b+m);
		cout<<(long long)a[n-1]*b[0]<<endl;
	}
	return 0;
}

