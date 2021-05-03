#include<iostream>
using namespace std;
int n,a[1000],i,j,ok=1,t;
void in(){
	for(i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(){
	j=n-1;
	while(j>0&&a[j]>a[j+1]) j--;
	if(j>0){
		int k=n;
		while(a[j]>a[k]) k--;
		int t=a[j]; a[j]=a[k]; a[k]=t;
		int r=j+1,s=n;
		while(r<=s){
			t=a[r];a[r]=a[s];a[s]=t;
			r++; s--;
		}
	} else ok=0;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(i=1;i<=n;i++) cin>>a[i];
		sinh();
		if(ok!=0) in();
		else{
			for(i=1;i<=n;i++) cout<<i<<" ";
			cout<<endl;
		}
	}
	return 0;
}

