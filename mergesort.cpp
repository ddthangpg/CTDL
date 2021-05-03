#include<iostream>
#include<algorithm>
using namespace std;
void re(int n,int a[]){
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int *a=new int[n];
		re(n,a);
	}
	return 0;
}

