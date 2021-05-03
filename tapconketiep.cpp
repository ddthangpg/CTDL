#include<iostream>
using namespace std;
int ok=0,a[20]={0},n,k,t;
void inKQ(){
	for(int i=1;i<=k;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=k;
	while(a[i]==n-k+i) i--;
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
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>a[i];
		sinh();
		if(ok==1){
			for(int i=1;i<=k;i++) cout<<a[i]-a[1]+1<<" ";
			cout<<endl;
		}else
		inKQ();
	}
	return 0;
}

