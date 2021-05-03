#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int a[]={1,2,5,10,20,50,100,200,500,1000};
	int t; cin>>t;
	while(t--){
		int n,count=0,k=9;
		cin>>n;
		while(n>0){
			if(n>=a[k]){
				n-=a[k];
				count++;
			}else k--;
		}
		cout<<count<<endl;
	}
	return 0;
}
