#include<iostream>
using namespace std;
int n,k,count=0,a[101],x[101];
int check(){
	for(int i=1;i<k;i++){
		if(a[x[i]]>a[x[i+1]]) return 0;
	}
	return 1;
}
void Try(int i){
	for(int j=1+x[i-1];j<=n-k+i;j++){
		x[i]=j;
		if(i==k) count+=check();
		else Try(i+1);
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	cin>>n>>k;
	x[0]=0;
	for(int i=1;i<=n;i++) cin>>a[i];
	Try(1);
	cout<<count<<endl;
	return 0;
}

