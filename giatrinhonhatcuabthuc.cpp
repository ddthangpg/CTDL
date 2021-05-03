#include<iostream>
#include<algorithm>
using namespace std;
bool ss(int a,int b){
	return a>b ? 1:0;
}
void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t;  cin>>t;
	while(t--){
		int n; cin>>n;
		long long sum=0;
		int *a=new int[n];
		int *b=new int[n];
		nhap(a,n);
		nhap(b,n);
		sort(a,a+n);
		sort(b,b+n,ss);
		for(int i=0;i<n;i++) sum+=a[i]*b[i];
		cout<<sum<<endl;
		delete a; delete b;
	}	
	return 0;
}

