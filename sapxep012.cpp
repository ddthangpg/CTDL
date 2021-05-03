#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int a,n,b[3]={0}; cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			if(a==0) b[0]++;
			if(a==1) b[1]++;
			if(a==2) b[2]++;
		}
		for(int i=0;i<b[0];i++) cout<<"0 ";
		for(int i=0;i<b[1];i++) cout<<"1 ";
		for(int i=0;i<b[2];i++) cout<<"2 ";
		cout<<endl;
	}	
	return 0;
}

