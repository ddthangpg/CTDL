#include<iostream>
using namespace std;
int ok=0,a[20]={0},n,k,t;
void sinh(){
	int i=k;
	while(a[i]==n-k+i&&i>0) i--;
	if(i==0) ok=1;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++)
		a[j]=a[j-1]+1;
	}
}
int main(){
	cin>>t;
	while(t--){
		int c1[50]={0},c2[50]={0},count=0;
		ok=0;
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>a[i];
		for(int i=1;i<=k;i++) c1[a[i]]++;
		sinh();
		for(int i=1;i<=k;i++) c2[a[i]]++;
		for(int i=1;i<=41;i++){
			if(c1[i]&&!c2[i]) count++;
		}		
		if(ok==0) cout<<count<<endl;
		else cout<<k<<endl;
	}
	return 0;
}
