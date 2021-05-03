#include<iostream>
using namespace std;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int so4=0,so7=0,ok=0;
		while(n>0){
			if(n%7==0){
				so7=n/7;
				ok=1;
				break;
			}
			n-=4;
			so4++;
		}
		if(!ok) cout<<"-1";
		else{
			for(int i=0;i<so4;i++) cout<<"4";
			for(int i=0;i<so7;i++) cout<<"7";
		}
		cout<<endl;
	}	
	return 0;
}

