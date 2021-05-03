#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	long long re[51];
	re[1]=1,re[2]=2,re[3]=4;
	for(int i=4;i<51;i++) re[i]=re[i-1]+re[i-2]+re[i-3];
	while(t--){
		int n; cin>>n;
		cout<<re[n]<<endl;
	}
	return 0;
}
