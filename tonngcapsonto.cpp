#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	int *a=new int[1000007];
	a[0]=0;
	for(int i=2;i<=sqrt(1000000);i++){
		if(a[i]==0){
			for(int j=i;j<=1000000;j+=i) a[j]=1;
		}
	}
	while(t--){
		int n;  cin>>n;		
		if(n%2==1){
			if(a[n-2]) cout<<"2 "<<n-2<<endl;
			else cout<<"-1"<<endl;
		}else if(n==4) cout<<"2 2"<<endl;
		else{
			int ok=0;
			for(int i=3;i<=n/2;i+=2){
				if(a[i]&&a[n-i]){
					cout<<i<<" "<<n-i<<endl;
					ok=1; break;
				}
			}
			if(ok==0) cout<<"-1 "<<endl;
		}
	}
	return 0;
}

