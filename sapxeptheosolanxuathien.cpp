#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int b[100005];
bool ss(int m,int n){
	if(b[m]>b[n]||b[m]==b[n]&&m<n) return 1;
	return 0;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n,a[10001];
		cin>>n;
		memset(b,0,100005);
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		sort(a,a+n,ss);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}	
	return 0;
}

