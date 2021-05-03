#include<iostream>
using namespace std;
long long f[100],n,x;
int try1(long long n,long long i){
	if(n==1) return 1;
	if(n==2) return 2;
	if(i>f[n-2]) return try1(n-1,i-f[n-2]);
	else return try1(n-2,i);
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	f[0]=0; f[1]=1;
	for(int i=2;i<94;i++) f[i]=f[i-1]+f[i-2];
	while(t--){
		cin>>n>>x;
		int c=try1(n,x);
		if(c==1) cout<<"A"<<endl;
		if(c==2) cout<<"B"<<endl;
	}
	return 0;
}
//A B AB BAB ABBAB BABABBAB 

