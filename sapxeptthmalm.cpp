#include<iostream>
#include<algorithm>
using namespace std;
int check(int a[],int n){
	int b[100];
	copy(a,a+n,b);
	sort(b,b+n);
	for(int i=0;i<n/2;i++){
		if((a[i]!=b[n-i-1]||a[n-i-1]!=b[i])&&(a[i]!=b[i]||a[n-i-1]!=b[n-i-1])) return 0;		
	}
	return 1;
}
//1 6 3 4 5 2 7
//1 2 3 4 5 6 7

int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a[100];
		int n; cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		if(check(a,n)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}	
	return 0;
}

