#include<iostream>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,tang=0;
		cin>>n;
		int f[n+1]={0},a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++){
			f[i]=1;
			for(int j=1;j<i;j++)
				if(a[j]<=a[i]){
					f[i]=max(f[i],f[j]+1);
				}
			tang=max(tang,f[i]);
		}
		cout<<n-tang<<endl;
	}
	return 0;
}
