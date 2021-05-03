#include<iostream>
using namespace std;
int main(){
	int result=1;
	int i,j,n,a[1000];
	cin>>n;
	int f[n+1]={};
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=n;i++){
		f[i]=1;
		for(j=0;j<i;j++)
			if(a[j]<a[i]){
				f[i]=max(f[i],f[j]+1);
			}
		result=max(result,f[i]);
	}
	cout<<result;
	return 0;
}
