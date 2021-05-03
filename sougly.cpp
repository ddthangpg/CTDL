#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long f[n+1],u2=1,u3=1,u5=1;
		f[1]=1;
		for(int i=2;i<=n;i++){
			f[i]=min(f[u2]*2,min(f[u3]*3,f[u5]*5));
			if(f[i]==f[u2]*2) u2++;
			if(f[i]==f[u3]*3) u3++;
			if(f[i]==f[u5]*5) u5++;
		}
		cout<<f[n]<<endl;
	}
	return 0;
}

